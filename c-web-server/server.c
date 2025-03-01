// #include <stdio.h>
#include <sys/socket.h>

void main () {

  int tcp_socket_fd = socket(AF_INET, SOCK_STREAM, 0);

  struct sockaddr_in addr {
    AF_INET;
    0x0f27;
    127.0.0.1;
  };
  
  bind(tcp_socket_fd, &addr, sizeof(addr);

  listen(tcp_socket_fd, 3);

  //return 0;
}
