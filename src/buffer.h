//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_BUFFER_H
#define SERVER_BASE_C_BUFFER_H

#include <stdio.h>

int buffer_recv(int sockfd, char *buf, size_t count);

int buffer_send();


#endif //SERVER_BASE_C_BUFFER_H
