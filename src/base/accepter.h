//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_ACCEPTER_H
#define SERVER_BASE_C_ACCEPTER_H

struct Accepter_Config {
    char *ip;
    int port;
};


static struct Accepter_Config *accepter_config_new(const char *ip, int port);

struct Accepter {

};


static struct Accepter *accepter_new(struct Accepter_Config *config);








#endif //SERVER_BASE_C_ACCEPTER_H
