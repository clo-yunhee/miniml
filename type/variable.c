#include "eval.h"


TYPE(var) {
    while (env != NULL) {
        if (env->name == var->exprVariable)
            return env->type;
        env = env->next;
    }
    VERR2("Undefined name %s", names_getnm(var->exprVariable));
}
