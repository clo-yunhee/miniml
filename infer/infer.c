#include "infer.h"


int poly;


#define CHECKERR do { if (error) return terror; } while (false)

Type *infer_type(Env *env, Ast *expr) {
    // reinit poly number
    poly = 1;

    bool error = false;

    TypedAst *annotated = infer_annotate(env, expr, &error);
    //typed_print(annotated); printf("\n***\n\n");
    CHECKERR;

    ConsList *constraints = infer_constraints(annotated, &error);
    //list_print(constraints, cons_print, " - Cons: \n", ",\n", "\n***\n\n");
    CHECKERR;

    SubstList *substitutions = infer_unify(constraints, &error);
    //list_print(substitutions, subst_print, " - Subs: \n", ",\n", "\n***\n\n");
    CHECKERR;

    TypedAst *typed = infer_apply(substitutions, annotated, &error);
    //typed_print(typed); printf("\n***\n\n");
    CHECKERR;
    
    return typed->xtype;
}


