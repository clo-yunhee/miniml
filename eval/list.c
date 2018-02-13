#include "eval.h"


EVAL(list) {
    value_t *value;

    astlist_t *expr = list->exprList;
    while (expr != NULL) {
        value = visit_eval(env, expr->elem, nameptr);
        expr = expr->next;
    }

    return value;
}