#include <mimas/mimas.h>
#include <internal.h>

#include <stdlib.h>
#include <string.h>

static Mimas_Internal* _mimas = NULL;

void _mimas_init_internal(Mimas_Backend const backend) {
    _mimas = (Mimas_Internal*)malloc(sizeof(Mimas_Internal));
    memset(_mimas, 0, sizeof(Mimas_Internal));
    _mimas->backend = backend;
}

void _mimas_terminate_internal() {
    free(_mimas);
}

mimas_bool _mimas_is_initialized() {
    return _mimas != NULL;
}

Mimas_Internal* _mimas_get_mimas_internal() {
    return _mimas;
}
