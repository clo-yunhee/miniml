#include "infer.h"


int poly;


#define CHECKERR do { if (*error) return terror; } while (false)

Type *infer_type(Env *env, Ast *expr, bool *error) {
    // reinit poly number
    poly = 1;

    TypedAst *annotated = infer_annotate(env, expr, error);
    if (flag_debug) {
        printf(" - Pre-AST: \n");
        typed_print(annotated);
        printf("\n***\n\n");
    }
    CHECKERR;

    ConsList *constraints = infer_constraints(annotated, error);
    if (flag_debug) {
        list_print(constraints, (ListPrintFunc) cons_print,
                " - Cons: \n", ",\n", "\n***\n\n");
    }
    CHECKERR;

    SubstList *substitutions = infer_unify(constraints, error);
    if (flag_debug) {
        list_print(substitutions, (ListPrintFunc) subst_print,
                " - Subs: \n", ",\n", "\n***\n\n");
    }
    CHECKERR;

    TypedAst *typed = infer_apply(substitutions, annotated, error);
    if (flag_debug) {
        printf(" - Post-AST: \n");
        typed_print(typed);
        printf("\n***\n\n");
    }
    CHECKERR;
    
    return typed->xtype;
}


