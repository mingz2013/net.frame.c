//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_BUFFER_H
#define SERVER_BASE_C_BUFFER_H

#include <stdio.h>

ssize_t buffer_read(int connfd, char *buf, size_t count);

ssize_t buffer_send(int connfd, char *buf, size_t len);



#endif //SERVER_BASE_C_BUFFER_H
