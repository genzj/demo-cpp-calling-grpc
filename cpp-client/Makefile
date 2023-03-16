.PHONY: all clean stub-clean test

SOURCES := stub/api.pb.cc base64.cc client.cc

all: client

# https://github.com/protocolbuffers/protobuf/blob/6ed3b558d24281030ee08354fd48b0ed3201f591/examples/Makefile#L47
client: $(SOURCES)
	pkg-config --cflags protobuf >/dev/null # fails if protobuf is not installed
	$(CXX) -std=c++14 -o $@ $^ `pkg-config --cflags --libs protobuf`

stub/%.pb.cc: ../protos/api.proto
	protoc -I $(dir $<) --cpp_out=$(dir $@) $^

test: client
	./client

clean:
	@rm ./client

stub-clean:
	@rm ./stub/*.*
