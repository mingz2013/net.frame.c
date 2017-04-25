//
// Created by zhaojm on 25/04/2017.
//

#ifndef SERVER_BASE_C_APP_H
#define SERVER_BASE_C_APP_H


struct app;

struct app *app_new();

void app_free(struct app *a);

void app_run(struct app *a, char *ip, int port);


struct app {
    void (*app_run)(struct app *a, char *ip, int port);

    void (*app_free)(struct app *a);
};


#endif //SERVER_BASE_C_APP_H
