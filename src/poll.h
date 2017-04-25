//
// Created by zhaojm on 25/04/2017.
//

#ifndef SERVER_BASE_C_SELECTOR_POLL_H
#define SERVER_BASE_C_SELECTOR_POLL_H

struct selector;
struct selector *s;


void poll_new();

void poll_free();

void poll_add_event();

void poll_remove_event();

void poll_dispatch_event();

#endif //SERVER_BASE_C_SELECTOR_POLL_H
