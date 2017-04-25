//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_ACCEPTER_H
#define SERVER_BASE_C_ACCEPTER_H

struct accepter_config {
    char *ip;
    int port;
};


static struct Accepter_Config *accepter_config_new(const char *ip, int port);

void accepter_config_free(struct accepter_config *config);


struct accepter {

};


static struct accepter *accepter_new(struct accepter_config *config);


static void accepter_listen();

static void accepter_bind();

static void accepter_accept();

void accepter_free(struct accepter *accepter1);


#endif //SERVER_BASE_C_ACCEPTER_H
