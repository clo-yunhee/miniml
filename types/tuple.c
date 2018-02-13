#include "eval.h"


EVAL(tuple) {
    vlist_t *elems = NULL;
    astlist_t *exprs = tuple->exprTuple;

    while (exprs != NULL) {
        elems = vlist_make(visit_eval(env, exprs->elem, NULL), elems);
        exprs = exprs->next;
    }

    return value_make_tuple(vlist_rev(elems));
}

