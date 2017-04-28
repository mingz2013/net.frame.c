//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_EVENT_LOOP_H
#define SERVER_BASE_C_EVENT_LOOP_H


struct event_loop {

};

static struct event_loop *event_loop_new();

void event_loop_free();


void event_loop_run();


#endif //SERVER_BASE_C_EVENT_LOOP_H
