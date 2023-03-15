./grpcwebproxy \
    --server_http_debug_port=50080 \
    --backend_addr=localhost:50051 \
    --allow_all_origins \
    --enable_request_debug \
    --run_tls_server=false

