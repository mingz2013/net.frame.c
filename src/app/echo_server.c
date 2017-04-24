//
// Created by zhaojm on 24/04/2017.
//

#include "base/tcp_server.h"


void on_connection() {

}

void on_message() {

}

void on_close() {

}


struct echo_server *echo_server_new() {

    struct echo_server *server = malloc(sizeof(*server));

    server->tcp_server = tcp_server_new();
    server->tcp_server->on_connection_cb = &on_connection;
    server->tcp_server->on_message_cb = &on_message;
    server->tcp_server->on_close_cb = &on_close;

    return server;
}


void echo_server_run(struct echo_server *server, char *ip, int port) {
    tcp_server_run(server->tcp_server, ip, port);
}

void echo_server_free(struct echo_server *server) {

    tcp_server_free(server->tcp_server);

    free(server);
}