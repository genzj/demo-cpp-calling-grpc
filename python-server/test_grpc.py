"""The Python implementation of the gRPC route guide client."""

from __future__ import print_function

import logging

import grpc
from stub import api_pb2, api_pb2_grpc


def guide_get_one_feature(stub, point):
    feature = stub.GetFeature(point)
    if not feature.location:
        print("Server returned incomplete feature")
        return

    print("Feature called %r at %s" % (feature.name, feature.location))


def guide_get_feature(stub):
    guide_get_one_feature(stub, api_pb2.Point(latitude=42, longitude=89))


def run():
    # NOTE(gRPC Python Team): .close() is possible on a channel and should be
    # used in circumstances in which the with statement does not fit the needs
    # of the code.
    with grpc.insecure_channel('localhost:50051') as channel:
        stub = api_pb2_grpc.RouteGuideStub(channel)
        print("-------------- GetFeature --------------")
        guide_get_feature(stub)


if __name__ == '__main__':
    logging.basicConfig()
    run()
