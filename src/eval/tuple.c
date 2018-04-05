#include "eval.h"


EVAL(tuple) {
    ValueList *elems = NULL;
    AstList *exprs = tuple->exprTuple;

    ListIterator it;
    list_iterate(&exprs, &it);
    while (list_iter_has_more(&it)) {
        Ast *expr = list_iter_next(&it);

        Value *value = visit_eval(env, expr);

        list_append(&elems, value);
    }

    return value_make_tuple(elems);
}

