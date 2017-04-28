//
// Created by zhaojm on 24/04/2017.
//

#include "buffer.h"


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

ssize_t buffer_read(int connfd, char *buf, size_t count) {
    size_t bytes_read = 0;
    ssize_t this_read;
    while (bytes_read < count) {
        do {
            this_read = read(connfd, buf, count - bytes_read);
        } while ((this_read < 0) && (errno == EINTR));
        if (this_read < 0) {
            return this_read;
        } else if (this_read == 0) {
            return bytes_read;
        }
        bytes_read += this_read;
        buf += this_read;
    }
}

ssize_t buffer_send(int connfd, char *buf, size_t len) {
    ssize_t bytes_send = 0;
    ssize_t this_send;
    if (len < 0) {
        return 0;
    }
    while (bytes_send < len) {
        do {
            this_send = send(connfd, buf, len - bytes_send, 0);
        } while ((this_send < 0) && (errno == EINTR));
        if (this_send < 0) {
            return bytes_send;
        }
        bytes_send += this_send;
        buf += this_send;
    }

}