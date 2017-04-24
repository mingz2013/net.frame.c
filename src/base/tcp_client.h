//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_TCP_CLIENT_H
#define SERVER_BASE_C_TCP_CLIENT_H

#include "tcp_connection.h"

struct tcp_client;

struct tcp_client *tcp_client_new();

void tcp_client_free(struct tcp_client *client);

void on_connection(struct tcp_client *client, struct tcp_connection *connection);

void on_message(struct tcp_client *client, struct tcp_connection *connection, char *message);

void on_close(struct tcp_client *client, struct tcp_connection *connection);


void connect(char *ip, int port);


struct tcp_client {
    struct tcp_connection *connection;


    void (*tcp_client_free)(struct tcp_client *client);

    void (*on_connection)(struct tcp_client *client, struct tcp_connection *connection);

    void (*on_message)(struct tcp_client *client, struct tcp_connection *connection, char *message);

    void (*on_close)(struct tcp_client *client, struct tcp_connection *connection);
};

#endif //SERVER_BASE_C_TCP_CLIENT_H
