#include "type.h"


TYPE(tuple) {
    tdlist_t *types = NULL;
    astlist_t *exprs = tuple->exprTuple;

    while (exprs != NULL) {
        typedata_t *type = visit_type(env, exprs->elem, NULL);
        checkerr(type);

        types = tdlist_make(type, types);
        exprs = exprs->next;
    }

    return type_tuple(tdlist_rev(types));
}

