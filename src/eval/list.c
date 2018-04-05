#include "eval.h"


EVAL(list) {
    Value *value;

    AstList *expr = list->exprList;

    ListIterator it;
    list_iterate(&expr, &it);    
    while (list_iter_has_more(&it)) {
        Ast *expr = list_iter_next(&it);

        value = visit_eval(env, expr, error);
    }

    return value;
}
