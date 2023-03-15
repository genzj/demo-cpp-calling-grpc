#!/bin/bash

cd "$(dirname "${BASH_SOURCE[0]}")" || exit 1

python -m grpc_tools.protoc \
    -I../protos --python_out=./stub/ --pyi_out=./stub/ --grpc_python_out=./stub/ ../protos/api.proto


# check https://github.com/QMSTR/pyqmstr/commit/0c6eb5b6e3d812607dd557e50ddf48b5f4ca379c
sed -i -E 's/^\(import.*_pb2\)/from . \1/' stub/*.py
