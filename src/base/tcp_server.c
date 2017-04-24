//
// Created by zhaojm on 24/04/2017.
//

#include "tcp_server.h"

void on_connection(struct tcp_server *server, struct tcp_connection *connection) {

}

void on_message(struct tcp_server *server, struct tcp_connection *connection, char *message) {

}

void on_close(struct tcp_server *server, struct tcp_connection *connection) {

}



struct tcp_server *tcp_server_new() {
    struct tcp_server *server = malloc(sizeof(*server));
    // TODO 初始化connections

    return server;
}


void tcp_server_run(struct tcp_server *tcp_server, char *ip, int port) {

}

void tcp_server_free(struct tcp_server *server) {
    free(server);
}
