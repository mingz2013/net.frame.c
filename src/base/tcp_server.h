//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_TCP_SERVER_H
#define SERVER_BASE_C_TCP_SERVER_H

#include "tcp_connection.h"

struct tcp_server;

void on_connection(struct tcp_server *server, struct tcp_connection *connection);

void on_message(struct tcp_server *server, struct tcp_connection *connection, char *message);

void on_close(struct tcp_server *server, struct tcp_connection *connection);


void add_one_connection(struct tcp_connection *connection);

void remove_one_connection(struct tcp_connection *connection);


void tcp_server_run(struct tcp_server *tcp_server, char *ip, int port);



static struct tcp_server *tcp_server_new();

void tcp_server_free(struct tcp_server *server);

struct tcp_server {

    struct tcp_connection *connections[];

    void (*tcp_server_run)(struct tcp_server *server, char *ip, int port);

    void (*tcp_server_free)(struct tcp_server *server);

    void (*add_one_connection)(struct tcp_connection *connection);

    void (*remove_one_connection)(struct tcp_connection *connection);

    void (*on_connection)(struct tcp_server *server, struct tcp_connection *connection);

    void (*on_message)(struct tcp_server *server, struct tcp_connection *connection, char *message);

    void (*on_close)(struct tcp_server *server, struct tcp_connection *connection);
};




#endif //SERVER_BASE_C_TCP_SERVER_H
