#ifndef _INFERENCE_H_
#define _INFERENCE_H_


typedef struct typed_ast TypedAst;

void typed_print(TypedAst *ast);
void talist_print(TypedAstList *astlist);

/* Infer the type of this expression. */
Type *infer_type(Env *env, Ast *expr, bool *error);

/* Evaluates the value of the expression. */
Value *visit_eval(Env *env, Ast *expr, bool *error);


#endif // _INFERENCE_H_
