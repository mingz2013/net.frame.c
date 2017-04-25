//
// Created by zhaojm on 24/04/2017.
//

#include "tcp_client.h"
#include "log.h"

struct tcp_client *tcp_client_new() {
    struct tcp_client *client = malloc(sizeof(client));

    client->on_connection = &on_connection;
    client->on_message = &on_message;
    client->on_close = &on_close;

    return client;
}

void tcp_client_free(struct tcp_client *client) {

    free(client);
}

void on_connection(struct tcp_client *client, struct tcp_connection *connection) {
    client->connection = connection;
}

void on_message(struct tcp_client *client, struct tcp_connection *connection, char *message) {
    log_info(message);
}

void on_close(struct tcp_client *client, struct tcp_connection *connection) {
    client->connection->tcp_connection_free(client->connection);
    client->tcp_client_free(client);
}