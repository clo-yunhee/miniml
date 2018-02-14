#include "type.h"


TYPE(ifelse) {
    typedata_t *cond = visit_type(env, ifelse->exprIf.cond, NULL);
    checkerr(cond);

    checktypes(cond, tbool, "Condition type mismatch");
    
    typedata_t *typeIf = visit_type(env, ifelse->exprIf.bIf, NULL);
    checkerr(typeIf);
    
    typedata_t *typeElse = visit_type(env, ifelse->exprIf.bElse, NULL);
    checkerr(typeElse);

    checktypes(typeIf, typeElse, "If-else branch types mismatch");

    return typeIf;
}
