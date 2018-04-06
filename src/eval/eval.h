#ifndef _EVAL_H_
#define _EVAL_H_

#include "common.h"

#define EVAL(type) Value *eval_##type (Env *env, Ast * type, bool *error) 

EVAL(var);
EVAL(seq);
EVAL(funcall);
EVAL(let);
EVAL(ifelse);
EVAL(tuple);
EVAL(list);

#define VERR(str)  do { fprintf(stderr, str "\n"); *error = true; return vunit; } while (false)
#define VERR2(str, ...) do { fprintf(stderr, str "\n", __VA_ARGS__); *error = true; return vunit; } while (false)

#endif // _EVAL_H_
