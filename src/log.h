//
// Created by zhaojm on 24/04/2017.
//

#ifndef SERVER_BASE_C_LOG_H
#define SERVER_BASE_C_LOG_H

enum level_enum {
    debug,
    warn,
    error,
    info,
    trace,
};

struct log_config {
    enum level_enum level;
};

static struct log_config *log_cfg;


static void log_init();

static void log_debug();

static void log_warn();

static void log_error();

static void log_info();

static void log_trace();

static void _log();


#endif //SERVER_BASE_C_LOG_H
