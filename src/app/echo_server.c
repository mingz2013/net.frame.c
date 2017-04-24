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
    struct tcp_server *server = tcp_server_new();

    server->on_connection_cb = &on_connection;
    server->on_message_cb = &on_message;
    server->on_close_cb = &on_close;

    return server;
}


void echo_server_run(struct echo_server *server, char *ip, int port) {
    tcp_server_run(server, ip, port);
}

void echo_server_free(struct echo_server *server) {
    tcp_server_free(server);
}