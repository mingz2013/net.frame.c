//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_ECHO_SERVER_H
#define SERVER_BASE_C_ECHO_SERVER_H

#include "base/tcp_server.h"


void echo_server_run(struct echo_server *server, char *ip, int port);


void echo_server_free(struct echo_server *server);


struct echo_server {
    struct tcp_server *tcp_server;

    void (*echo_server_run)(struct echo_server *, char *, int);

    void (*echo_server_free)(struct echo_server *);
};

struct echo_server *echo_server_new();

#endif //SERVER_BASE_C_ECHO_SERVER_H
