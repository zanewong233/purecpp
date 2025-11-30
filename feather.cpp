#include <iostream>
#include <cinatra.hpp>
using namespace cinatra;

int main() {
  coro_http_server server(std::thread::hardware_concurrency(), 9000);
  server.set_static_res_dir("", "html");
  server.sync_start();
}