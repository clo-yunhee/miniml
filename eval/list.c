#include "eval.h"


EVAL(list) {
    value_t *value;

    AstList *expr = list->exprList;

    ListIterator it;
    list_iterate(&expr, &it);    
    while (list_iter_has_more(&it)) {
        ast_t *expr = list_iter_next(&it);

        value = visit_eval(env, expr);
    }

    return value;
}
