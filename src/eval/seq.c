#include "eval.h"


EVAL(seq) {
    Value *value;

    AstList *expr = seq->exprSeq;

    ListIterator it;
    list_iterate(&expr, &it);    
    while (list_iter_has_more(&it)) {
        Ast *expr = list_iter_next(&it);

        value = visit_eval(env, expr, error);
    }

    return value;
}
