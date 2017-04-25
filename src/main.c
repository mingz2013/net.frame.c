#include <stdio.h>

#include "app.h"


int main(int args, char **argv) {

    printf("hello, world!\n");

    struct app *a = app_new();
    a->app_run(a, "127.0.0.1", 5000);
    a->app_free(a);
    return 0;
}
