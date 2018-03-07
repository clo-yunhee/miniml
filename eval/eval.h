#ifndef _EVAL_H_
#define _EVAL_H_

#include "../common.h"

#define EVAL(type) Value *eval_##type (Env *env, Ast * type) 

EVAL(var);
EVAL(list);
EVAL(funcall);
EVAL(let);
EVAL(ifelse);
EVAL(tuple);


#define VERR(str)  do { fprintf(stderr, str "\n"); return value_make_error(); } while (false)
#define VERR2(str, ...) do { fprintf(stderr, str "\n", __VA_ARGS__); return value_make_error(); } while (false)

#endif // _EVAL_H_
