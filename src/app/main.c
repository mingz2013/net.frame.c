#include <stdio.h>


#include "echo_server.h"
#include "base/reactor.h"



int main(int args, char **argv) {

    printf("hello, world!\n");

    struct reactor *r = reactor_new();

    struct echo_server *server = echo_server_new("127.0.0.1", 5000);

    r->reactor_run((struct tcp_server *) server);

    server->echo_server_free(server);

    r->reactor_free(r);

    return 0;
}
