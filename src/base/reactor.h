//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_REACTOR_H
#define SERVER_BASE_C_REACTOR_H

struct reactor {
    void (*reactor_run)(struct tcp_server *server);

    void (*reactor_free)(struct reactor *r);
};

struct reactor *reactor_new();

void add_accepter();

void add_connector();

void reactor_run(struct tcp_server *server);

void reactor_free(struct reactor *r);

#endif //SERVER_BASE_C_REACTOR_H
