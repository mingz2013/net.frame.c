//
// Created by zhaojm on 24/04/2017.
//

#include <tclDecls.h>
#include "log.h"

static void log_init(enum level_enum level) {
    log_cfg = malloc(sizeof(*log_cfg));
    log_cfg->level = level;

}

static void log_debug() {
    if (log_cfg->level > debug) {
        _log();
    }
}

static void log_warn() {
    if (log_cfg->level > warn) {
        _log();
    }
}

static void log_error() {
    if (log_cfg->level > error) {
        _log();
    }
}

static void log_info() {
    if (log_cfg->level > info) {
        _log();
    }
}

static void log_trace() {
    if (log_cfg->level > trace) {
        _log();
    }
}

static void _log() {

}