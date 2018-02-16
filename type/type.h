#ifndef _EVAL_H_
#define _EVAL_H_

#include <stdio.h>
#include <stdlib.h>

#include "../list.h"
#include "../names.h"
#include "../ast.h"
#include "../environment.h"
#include "../types.h"
#include "../natives.h"
#include "../visit.h"

#define TYPE(tn) Type *typing_##tn (Environment *env, Ast * tn , NameList **nameptr)

TYPE(var);
TYPE(list);
TYPE(funcall);
TYPE(let);
TYPE(ifelse);
TYPE(tuple);


#define VERR(str)  do { fprintf(stderr, str "\n"); return terror; } while (false)
#define VERR2(str, ...) do { fprintf(stderr, str "\n", __VA_ARGS__); return terror; } while (false)

#define checktypes(tx, ty, str) do { \
    if (!type_equ(tx, ty)) {     \
        printf(str ": was ");    \
        type_print(tx);          \
        printf(", expected ");   \
        type_print(ty);          \
        printf("\n");            \
        return terror;           \
    }                            \
} while (false)

#define checkerr(t) do { if (type_equ(t, terror)) return terror; } while (false) 

#define setnames(lst) do { if (nameptr != NULL) *nameptr = lst; } while (false)
#define setname(val)  setnames(list_new(nmalloc(val)))

#endif // _EVAL_H_
