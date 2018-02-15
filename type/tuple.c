#include "type.h"


TYPE(tuple) {
    TypeList *types = NULL;
    AstList *exprs = tuple->exprTuple;
    
    ListIterator it;
    list_iterate(&exprs, &it);

    while (list_iter_has_more(&it)) {
        ast_t *expr = list_iter_next(&it);

        typedata_t *type = visit_type(env, expr, NULL);
        checkerr(type);
    
        list_append(&types, type);
    }

    return type_tuple(types);
}

