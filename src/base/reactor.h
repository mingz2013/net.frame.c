//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_REACTOR_H
#define SERVER_BASE_C_REACTOR_H

struct Reactor {

};

static struct Reactor *reactor_new();

static void add_accepter();

static void add_connector();

static void run(char *ip, int port);


#endif //SERVER_BASE_C_REACTOR_H
