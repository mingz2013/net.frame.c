//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_SOCKET_H
#define SERVER_BASE_C_SOCKET_H

#include <stdio.h>

size_t BUFF_LINE = 4096;

int socket_new();

int socket_bind(int socketfd, int port);

int socket_listen(int socketfd);

int socket_connect(int sockfd, char *ip, int port);

int socket_accept(int socketfd);

ssize_t socket_send(int sockfd, const char *msg);

ssize_t socket_recv(int connfd, char *buff);

int socket_read(int connfd, char *buf, size_t count);


int socket_close(int sockfd);

void socket_nonblocking();

void socket_free();


#endif //SERVER_BASE_C_SOCKET_H
