//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_TCP_CONNECTION_H
#define SERVER_BASE_C_TCP_CONNECTION_H


struct tcp_connection;

struct tcp_connection *tcp_connection_new();

struct tcp_connection *tcp_connection_free(struct tcp_connection *connection);


void tcp_connection_send(struct tcp_connection *connection, char *message);


struct tcp_connection {
    void (*tcp_connection_free)(struct tcp_connection *connection);

    void (*tcp_connection_send)(struct tcp_connection *connection, char *message);
};

#endif //SERVER_BASE_C_TCP_CONNECTION_H
