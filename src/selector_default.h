//
// Created by zhaojm on 25/04/2017.
//

#ifndef SERVER_BASE_C_SELECTOR_DEFAULT_H
#define SERVER_BASE_C_SELECTOR_DEFAULT_H

struct selector {

};


static struct selector *selector_new();


static struct selector *default_selector();

void add_event();

void remove_event();

void dispatch_event();

#endif //SERVER_BASE_C_SELECTOR_DEFAULT_H
