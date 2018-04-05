#include "eval.h"


EVAL(var) {
    while (env != NULL) {
        if (env->name == var->exprVariable)
            return env->value;
        env = env->next;
    }
    VERR2("Undefined name %s", names_getnm(var->exprVariable));
}
