#!/usr/bin/env python

import base64
import logging
import requests

from binascii import b2a_hex

# Stubs generated by protoc
from stub import api_pb2

from struct import pack

HOST = 'http://127.0.0.1:50080'
HEADERS = {'Content-Type': 'application/grpc-web-text', 'Host': 'grpc'}


def guide_get_one_feature(point):
    data = point.SerializeToString()
    data = pack('!cI', b'\0', len(data)) + data
    data = base64.b64encode(data)
    print("---------- Request: ----------")
    print('\n'.join(f'{k}: {v}' for k, v in HEADERS.items()))
    print()
    print(data)
    print("---------- : ----------")

    resp = requests.post(
        HOST + "/routeguide.RouteGuide/GetFeature", data=data, headers=HEADERS)
    print("---------- Response: ----------")
    print(resp.content)
    print("---------- : ----------")
    bs = base64.b64decode(resp.content)
    print("Server returned bs: %s" % (b2a_hex(bs),))
    feature = api_pb2.Feature().FromString(bs[5:])

    if not feature.location:
        print("Server returned incomplete feature")
        return

    print("Feature called %r at %s" % (feature.name, feature.location))


def guide_get_feature():
    guide_get_one_feature(api_pb2.Point(latitude=42, longitude=89))


def run():
    print("-------------- GetFeature --------------")
    guide_get_feature()


if __name__ == '__main__':
    logging.basicConfig()
    run()
