# A Demo of C++ Calling gRPC Server via HTTP

This demo shows a way for C++ to call gRPC service without relying on HTTP/2.
It utilizes the [grpc-web protocol](https://github.com/grpc/grpc/blob/master/doc/PROTOCOL-WEB.md) and corresponding [grpc-web-proxy](https://github.com/improbable-eng/grpc-web/tree/master/go/grpcwebproxy) to remove the dependency on HTTP/2.
It means that any platform with TCP ability should be able to make successful requests to any gRPC service. But to utilize the protoc compiler and the Google Protobuf library, a C++17 compiler and the ability to link client to the libprotobuf is also needed; or the protobuf serializer/deserializer shall be implemented from the scratch.

## Request Flow

```text
 ┌────────────────┐         ┌───────────────────────────────────────────────┐
 │  Client  Host  │         │                 Server Host                   │
 ├────────────────┤         ├───────────────────────────────────────────────┤
 │                │         │                                               │
 │                │         │                                               │
 │ ┌────────────┐ │  HTTP   │ ┌───────────┐  gRPC over HTTP2  ┌───────────┐ │
 │ │            │ │ To Port │ │           │      To Port      │           │ │
 │ │ CPP Client │ │  50080  │ │   Proxy   │       50051       │ PY Server │ │
 │ │            ├─┼─────────┼─►           ├───────────────────►           │ │
 │ └────────────┘ │         │ └───────────┘                   └───────────┘ │
 │                │         │                                               │
 └────────────────┘         └───────────────────────────────────────────────┘
```

## CPP Client Output

```text
Connected to the server!
Message: latitude: 22
longitude: 11

********HTTP Request********
POST /routeguide.RouteGuide/GetFeature HTTP/1.1
Content-Type: application/grpc-web-text
Accept-Encoding: identity
Grpc-Accept-Encoding: identity
Host: grpc
Content-Length: 12

AAAAAAQIFhAL

Awaiting server response...
********HTTP Response********
HTTP/1.1 200 OK
Access-Control-Expose-Headers: Grpc-Accept-Encoding, Vary, Date, Content-Type, grpc-status, grpc-message
Content-Type: application/grpc-web-text
Grpc-Accept-Encoding: identity, deflate, gzip
Vary: Origin
Transfer-Encoding: chunked

18
AAAAAAwKBHRlc3QSBAgWEAs=
1c
gAAAABBncnBjLXN0YXR1czogMA0K
0


********Body********
AAAAAAwKBHRlc3QSBAgWEAs=
********Decoded********
000000000c0a047465737412040816100b
********gRPC Output********
name: "test"
location {
  latitude: 22
  longitude: 11
}

********Session********
Bytes written: 197 Bytes read: 324
Connection closed
```

## Prerequisites

1. For Python Server
    1. Install Python 3.11 and pipenv
    1. Run 
        ```sh
        cd python-server
        pipenv install
        ```
1. For the Proxy:
    1. Download the proper release from
       https://github.com/improbable-eng/grpc-web/releases
    1. Unzip the downloaded archive and move the binary into this folder;
    1. Rename the binary to `grpcwebproxy`
1. For the CPP client
    1. Install protobuf by following https://grpc.io/docs/languages/cpp/quickstart/#install-grpc

## Run the Demo

1. In Terminal A, start Python Server by running:
    ```sh
    cd python-server
    pipenv run python server.py
    ```
1. In Terminal B, start the Proxy:
    ```sh
    cd proxy
    ./start_proxy.sh
    ```
1. In Terminal C, start the Client:
    ```sh
    cd cpp-client
    make test
    ```
