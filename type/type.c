#include "type.h"

typedata_t *visit_type(env_t *env, ast_t *expr, namelist_t **nameptr) {
   
    setname(NO_NAME); // default name

    switch (expr->type) {
    case e_unit:
        return tunit;
    case e_int:
        return tint;
    case e_float:
        return tfloat;
    case e_bool:
        return tbool;
    case e_string:
        return tstring;
    case e_var:
        return typing_var(env, expr, nameptr);
    case e_block:
        return visit_type(env, expr->exprBlock, nameptr);
    case e_list:
        return typing_list(env, expr, nameptr);
    case e_funcall:
        return typing_funcall(env, expr, nameptr);
    case e_let:
        return typing_let(env, expr, nameptr);
    case e_if:
        return typing_ifelse(env, expr, nameptr);
    case e_tuple:
        return typing_tuple(env, expr, nameptr);
    default:
        VERR("Typing not implemented yet");
    }

}

