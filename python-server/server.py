from concurrent.futures import ThreadPoolExecutor
import logging

import grpc
from stub import api_pb2
from stub import api_pb2_grpc


class RouteGuideServicer(api_pb2_grpc.RouteGuideServicer):
    """Provides methods that implement functionality of route guide server."""

    def __init__(self):
        self.L = logging.getLogger('RouteGuideServicer')

    def GetFeature(self, request, context):
        self.L.info('receiving request: %s', request)
        return api_pb2.Feature(name="test", location=request)


def serve():
    server = grpc.server(ThreadPoolExecutor(max_workers=10))
    api_pb2_grpc.add_RouteGuideServicer_to_server(
        RouteGuideServicer(), server)
    server.add_insecure_port('[::]:50051')
    server.start()
    logging.info('server started')
    server.wait_for_termination()


if __name__ == '__main__':
    logging.basicConfig(level=logging.INFO)
    serve()
