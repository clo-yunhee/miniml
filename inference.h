#ifndef _INFERENCE_H_
#define _INFERENCE_H_

#include "infer/infer.h"


/* Returns a list of all expressions, numbered, with 'X types. */
ArrayList *infer_numbering(Env *env, Ast *ast);

/* Returns a list of type constraints based on the expression. */
ListEntry *infer_constraints(Env *env, ArrayList *astlist);


#endif // _INFERENCE_H_
