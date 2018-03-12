#include "infer.h"


int poly;


Type *infer_type(Env *env, Ast *expr) {
    // reinit poly number
    poly = 1;

    
    TypedAst *annotated = infer_annotate(env, expr);
    ConsList *constraints = infer_constraints(annotated);
    SubstList *substitutions = infer_unify(constraints);
    TypedAst *typed = infer_apply(substitutions, annotated);


    typed_print(annotated); printf("\n***\n\n");
    list_print(constraints, cons_print, " - Cons: \n", ",\n", "\n***\n\n");
    list_print(substitutions, subst_print, " - Subs: \n", ",\n", "\n***\n\n");
    typed_print(typed); printf("\n***\n\n");
    
    
    return typed->xtype;
}


