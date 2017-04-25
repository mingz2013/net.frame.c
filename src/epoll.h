//
// Created by zhaojm on 25/04/2017.
//

#ifndef SERVER_BASE_C_SELECTOR_EPOLL_H
#define SERVER_BASE_C_SELECTOR_EPOLL_H


struct selector;
struct selector *s;


void epoll_new();

void epoll_free();

void epoll_add_event();

void epoll_remove_event();

void epoll_dispatch_event();



#endif //SERVER_BASE_C_SELECTOR_EPOLL_H
