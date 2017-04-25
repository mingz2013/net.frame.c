//
// Created by zhaojm on 24/04/2017.
//
#include "tcp_connection.h"

struct tcp_connection *tcp_connection_new() {
    struct tcp_connection *connection = malloc(sizeof(*connection));
    return connection;
}

struct tcp_connection *tcp_connection_free(struct tcp_connection *connection) {
    free(connection);
}


void tcp_connection_send(struct tcp_connection *connection, char *message) {

}
