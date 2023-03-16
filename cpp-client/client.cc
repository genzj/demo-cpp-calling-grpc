#include <string>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>
#include <sys/uio.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

#include "stub/api.pb.h"
#include "base64.h"


using namespace std;
using namespace routeguide;

static string to_hex(const string& s, bool upper_case = false)
{
    ostringstream ret;

    for (string::size_type i = 0; i < s.length(); ++i)
        ret << std::hex << std::setfill('0') << std::setw(2) << (upper_case ? std::uppercase : std::nouppercase) << (int)s[i];

    return ret.str();
}

static vector<string> extract_http_body(string const& s) {
    vector<string> bodies;
    auto pos = s.find("\r\n\r\n");
    if (pos == string::npos || pos + 4 >= s.length()) {
        return bodies;
    }

    pos += 4;

    while(true) {
        size_t offset;
        unsigned long const len {stoul(s.substr(pos), &offset, 16)};
        if (len == 0 || offset == 0) {
            break;
        } else {
            /* cout << "pos=" << pos << " len=" << len << " offset=" << offset << endl; */
        }

        pos += offset + 2;
        auto const frame = s.substr(pos, len);
        /* cout << "frame=" << frame << endl; */
        bodies.push_back(frame);
        pos += len + 2;
    }
    return bodies;
}

static string generate_request(google::protobuf::Message const& message) {
    cout << "Message: " << message.DebugString() << endl;
    string request = "POST /routeguide.RouteGuide/GetFeature HTTP/1.1\r\n" \
        "Content-Type: application/grpc-web-text\r\n" \
        "Accept-Encoding: identity\r\n" \
        "Grpc-Accept-Encoding: identity\r\n" \
        "Host: grpc\r\n" \
        "Content-Length: ";
    ostringstream oss{request, ios_base::ate};
    string data;

    message.SerializeToString(&data);
    auto const len = data.length();
    ostringstream grpc_tlc;
    grpc_tlc << (unsigned char)(0x00);
    grpc_tlc << (unsigned char)(len >> 24);
    grpc_tlc << (unsigned char)(0xff & (len >> 16));
    grpc_tlc << (unsigned char)(0xff & (len >> 8));
    grpc_tlc << (unsigned char)(0xff & len);
    grpc_tlc << data;

    /* cout << "data=" << to_hex(data) << endl; */
    /* cout << "len=" << len << endl; */
    /* cout << "grpc_tlc=" << to_hex(grpc_tlc.str()) << endl; */
    data = base64_encode(grpc_tlc.str());

    oss << data.length() << "\r\n\r\n" << data << "\r\n";

    return oss.str();
}

int main(int argc, char const* argv[]) {
    // Verify that the version of the library that we linked against is
    // compatible with the version of the headers we compiled against.
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    char const *serverIp = "127.0.0.1";
    int port = atoi("50080"); 

    //create a message buffer 
    char msg[1500]; 

    //setup a socket and connection tools 
    struct hostent* host = gethostbyname(serverIp); 
    sockaddr_in sendSockAddr;   
    bzero((char*)&sendSockAddr, sizeof(sendSockAddr)); 
    sendSockAddr.sin_family = AF_INET; 
    sendSockAddr.sin_addr.s_addr = 
        inet_addr(inet_ntoa(*(struct in_addr*)*host->h_addr_list));
    sendSockAddr.sin_port = htons(port);
    int clientSd = socket(AF_INET, SOCK_STREAM, 0);

    //try to connect...
    int status = connect(
            clientSd,
            (sockaddr*) &sendSockAddr,
            sizeof(sendSockAddr)
            );
    if(status < 0)
    {
        cout<<"Error connecting to socket!"<<endl;
        return -1;
    }
    cout << "Connected to the server!" << endl;

    int bytesRead, bytesWritten = 0;
    Point point;
    point.set_longitude(11);
    point.set_latitude(22);
    string const data = generate_request(point);

    memset(&msg, 0, sizeof(msg));//clear the buffer
    strcpy(msg, data.c_str());
    bytesWritten += send(clientSd, (char*)&msg, strlen(msg), 0);
    cout << "********HTTP Request********" << endl << msg << endl;
    cout << "Awaiting server response..." << endl;
    sleep(1);
    memset(&msg, 0, sizeof(msg));//clear the buffer
    bytesRead += recv(clientSd, (char*)&msg, sizeof(msg), 0);
    cout << "********HTTP Response********" << endl << msg << endl;

    auto const bodies = extract_http_body(msg);
    if (bodies.empty()) {
        return 0;
    }

    cout << "********Body********" << endl << bodies.front() << endl;

    Feature feature;
    string decoded = base64_decode(bodies.front());

    cout << "********Decoded********" << endl << to_hex(decoded) << endl;
    bool ok = feature.ParseFromString(
        decoded.substr(5)
    );
    if (ok) {
        cout << "********gRPC Output********" << endl << feature.DebugString() << endl;
    } else {
        cout << "Cannot parse response" << endl;
    }

    close(clientSd);

    cout << "********Session********" << endl;
    cout << "Bytes written: " << bytesWritten << 
        " Bytes read: " << bytesRead << endl;
    cout << "Connection closed" << endl;

    // Optional:  Delete all global objects allocated by libprotobuf.
    google::protobuf::ShutdownProtobufLibrary();
    return 0;    
}
