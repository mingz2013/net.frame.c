//
// Created by zhaojm on 25/04/2017.
//

#ifndef SERVER_BASE_C_SELECTOR_SELECT_H
#define SERVER_BASE_C_SELECTOR_SELECT_H

struct selector;
struct selector *s;


void select_new();

void select_free();

void select_add_event();

void select_remove_event();

void select_dispatch_event();

#endif //SERVER_BASE_C_SELECTOR_SELECT_H
