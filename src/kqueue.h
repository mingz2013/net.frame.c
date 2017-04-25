//
// Created by zhaojm on 25/04/2017.
//

#ifndef SERVER_BASE_C_SELECTOR_KQUEUE_H
#define SERVER_BASE_C_SELECTOR_KQUEUE_H

struct selector;
struct selector *s;


void kqueue_new();

void kqueue_free();

void kqueue_add_event();

void kqueue_remove_event();

void kqueue_dispatch_event();


#endif //SERVER_BASE_C_SELECTOR_KQUEUE_H
