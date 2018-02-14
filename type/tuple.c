#include "type.h"


TYPE(tuple) {
    tdlist_t *types = NULL;
    astlist_t *exprs = tuple->exprTuple;

    while (exprs != NULL) {
        types = tdlist_make(visit_type(env, exprs->elem, NULL), types);
        exprs = exprs->next;
    }

    return type_tuple(tdlist_rev(types));
}

