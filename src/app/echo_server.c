//
// Created by zhaojm on 24/04/2017.
//

#include "base/tcp_server.h"



void on_message(struct echo_server *server, struct tcp_connection *connection, char *message) {
    connection->tcp_connection_send(connection, message);
}


struct echo_server *echo_server_new() {

    struct echo_server *server = malloc(sizeof(*server));
    server->echo_server_run = &echo_server_run;
    server->echo_server_free = &echo_server_free;

    server->tcp_server = tcp_server_new();


    server->tcp_server->on_message = server->on_message = &on_message;


    return server;
}


void echo_server_run(struct echo_server *server, char *ip, int port) {
    server->tcp_server->tcp_server_run(server->tcp_server, ip, port);
}

void echo_server_free(struct echo_server *server) {

    server->tcp_server->tcp_server_free();

    free(server);
}