//
// Created by zhaojm on 24/04/2017.
//

#include "tcp_server.h"

struct tcp_server *tcp_server_new() {
    struct tcp_server *server = malloc(sizeof(*server));
    return server;
}


void tcp_server_run(struct tcp_server *tcp_server, char *ip, int port) {

}

void tcp_server_free(struct tcp_server *server) {
    free(server);
}

//void tcp_server_set_event_connection(struct tcp_server* server, void* cb)
//{
//
//
//}
//void tcp_server_set_event_message(struct tcp_server* server, void * cb)
//{
//
//}
//void tcp_server_set_event_close(struct tcp_server* server, void * cb)
//{
//
//}