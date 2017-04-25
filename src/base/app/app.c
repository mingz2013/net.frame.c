//
// Created by zhaojm on 25/04/2017.
//

#include "app.h"
#include "base/reactor.h"
#include "base/servers/echo_server.h"

struct app *app_new() {
    struct app *a = malloc(sizeof(*a));
    a->app_free = &app_free;
    a->app_run = &app_run;
    return a;
}

void app_free(struct app *a) {
    free(a);
}

void app_run(struct app *a, char *ip, int port) {
    struct reactor *r = reactor_new();

    struct echo_server *server = echo_server_new(ip, port);

    r->reactor_run(r, (struct tcp_server *) server);

    server->echo_server_free(server);

    r->reactor_free(r);
}