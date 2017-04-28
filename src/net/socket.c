//
// Created by zhaojm on 24/04/2017.
//

#include "socket.h"

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stddef.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <fcntl.h>


int socket_new() {
    int socketfd = socket(AF_INET, SOCK_STREAM, 0);
    return socketfd;
}

int socket_bind(int socketfd, int port) {
    struct sockaddr_in servaddr;
    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(port);

    int ret = bind(socketfd, (struct sockaddr *) &servaddr, sizeof(servaddr));
    return ret;

}

int socket_listen(int socketfd) {
    int ret = listen(socketfd, 10);
    return ret;
}

int socket_accept(int socketfd) {
    int connfd = accept(socketfd, (struct sockaddr *) NULL, NULL);
    return connfd;
}

ssize_t socket_recv(int connfd, char *buff) {
    ssize_t n = recv(connfd, buff, BUFF_LINE, 0);
    return n;
}


ssize_t socket_send(int sockfd, const char *msg) {
    ssize_t n = send(sockfd, msg, strlen(msg), 0);
    return n;
}

int socket_close(int sockfd) {
    int ret = close(sockfd);
    return ret;
}

int socket_connect(int sockfd, char *ip, int port) {
    struct sockaddr_in servaddr;
    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(port);
//    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    int ret = inet_pton(AF_INET, ip, &servaddr.sin_addr);

    ret = connect(sockfd, (struct sockaddr *) &servaddr, sizeof(servaddr));
    return 0;
}


void socket_nonblocking(int connfd) {
    fcntl(connfd, F_SETFL, O_NONBLOCK);
}