#ifndef _EVAL_H_
#define _EVAL_H_

#include <stdio.h>
#include <stdlib.h>

#include "../names.h"
#include "../ast.h"
#include "../environment.h"
#include "../types.h"
#include "../natives.h"
#include "../visit.h"

#define TYPE(tn) typedata_t *typing_##tn (env_t *env, ast_t * tn , int *nameptr)

TYPE(var);
TYPE(list);
TYPE(funcall);
TYPE(let);
TYPE(ifelse);
TYPE(tuple);


#define VERR(str)  do { fprintf(stderr, str "\n"); return tunit; } while (false)
#define VERR2(str, ...) do { fprintf(stderr, str "\n", __VA_ARGS__); return tunit; } while (false)

#define checktypes(tx, ty, str) do { \
    fprintf(stderr, str ": was ");   \
    type_print(tx);                  \
    fprintf(stderr, " expected ");   \
    type_print(ty);                  \
    fprintf(stderr, "\n");           \
    return tunit;                    \
} while (false)

#define setname(val) do { if (nameptr != NULL) *nameptr = val; } while (false)

#endif // _EVAL_H_
