#ifndef _INFERENCE_H_
#define _INFERENCE_H_


typedef struct typed_ast TypedAst;

void typed_print(TypedAst *ast);
void talist_print(TypedAstList *astlist);


/* Annotates the expression with types. */
TypedAst *infer_annotate(Env *env, Ast *expr);

/* Collects a set of constraints on the types. */
ConsList *infer_constraints(TypedAst *expr);

/* Unifies the constraints into a list of ordered substitutions. */
SubstList *infer_unify(ConsList *constraints);

/* Applies the substitutions to the expression. !!THIS FUNCTION ALTERS THE ORIGINAL EXPRESSION!! */
TypedAst *infer_apply(SubstList *subs, TypedAst *expr);


/* Infer the type of this expression. */
Type *infer_type(Env *env, Ast *expr);


#endif // _INFERENCE_H_
