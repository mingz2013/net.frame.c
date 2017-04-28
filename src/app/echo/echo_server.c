//
// Created by zhaojm on 24/04/2017.
//

#include "echo_server.h"
#include "base/tcp_server.h"


void on_message(struct echo_server *server, struct tcp_connection *connection, char *message) {
    connection->tcp_connection_send(connection, message);
}


struct echo_server *echo_server_new(char *ip, int port) {

    struct echo_server *server = malloc(sizeof(*server));
    server->echo_server_run = &echo_server_run;
    server->echo_server_free = &echo_server_free;

    server->tcp_server = tcp_server_new(ip, port);


    server->tcp_server->on_message = server->on_message = &on_message;


    return server;
}


void echo_server_free(struct echo_server *server) {

    server->tcp_server->tcp_server_free();

    free(server);
}