#include "eval.h"


EVAL(list) {
    
    Ast *head = list->exprList.head;
    Ast *tail = list->exprList.tail;

    Value *valHead = NULL;
    Value *valTail = NULL;

    // if not nil
    if (head != NULL) {
        valHead = visit_eval(env, head, error);

        // if not single
        if (tail != NULL) {
            valTail = visit_eval(env, tail, error);
        }
    }

    return value_make_list(valHead, valTail);

}
