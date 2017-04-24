//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_TCP_SERVER_H
#define SERVER_BASE_C_TCP_SERVER_H




void tcp_server_run(struct tcp_server *tcp_server, char *ip, int port);


void tcp_server_free(struct tcp_server *server);

struct tcp_server {
    void (*tcp_server_run)(struct tcp_server *, char *, int);

    void (*tcp_server_free)(struct tcp_server *);

    void (*on_connection_cb)();

    void (*on_message_cb)();

    void (*on_close_cb)();
};

static struct tcp_server *tcp_server_new();



//void tcp_server_set_event_connection(struct tcp_server* server, void* cb);
//void tcp_server_set_event_message(struct tcp_server* server, void * cb);
//void tcp_server_set_event_close(struct tcp_server* server, void * cb);

#endif //SERVER_BASE_C_TCP_SERVER_H
