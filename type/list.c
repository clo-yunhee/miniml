#include "type.h"


TYPE(list) {
    Type *type;

    ListIterator exprIt;
    list_iterate(&list->exprList, &exprIt);
    
    while (list_iter_has_more(&exprIt)) {
        Ast *expr = list_iter_next(&exprIt);

        type = visit_type(env, expr, nameptr);
        checkerr(type);
    }

    return type;
}
