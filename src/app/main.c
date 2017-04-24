#include <stdio.h>


#include "echo_server.h"



int main(int args, char **argv) {

    printf("hello, world!\n");

    struct echo_server *server = echo_server_new();

    echo_server_run(server, "127.0.0.1", 5000);

    echo_server_free(server);

    return 0;
}
