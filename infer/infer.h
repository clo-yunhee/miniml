#ifndef _INFER_H_
#define _INFER_H_

#include "../common.h"

#define IERR(str)        fprintf(stderr, str "\n")
#define IERR2(str, ...)  fprintf(stderr, str "\n", __VA_ARGS__);


struct typed_ast {
    AstType type;
    union {
        // e_int
        int exprInteger;
        // e_float
        float exprFloat;
        // e_bool
        bool exprBool;
        // e_string
        char *exprString;
        // e_var
        int exprVariable;
        // e_block
        TypedAst *exprBlock;
        // e_list
        TypedAstList *exprList;
        // e_funcall
        struct { TypedAst *function;
                 TypedAstList *args; } exprFunCall;
        // e_let
        struct { Type *exprType;
                 bool rec;
                 TypeList *params;
                 TypedAst *expr;
                 TypedAst *block; } exprLet;
        // e_if
        struct { TypedAst *cond;
                 TypedAst *bIf;
                 TypedAst *bElse; } exprIf;
        // e_tuple
        TypedAstList *exprTuple;
    };

    int number;
    Type *xtype;
};


//-- generic type counter
extern int poly;
#define new_poly()  type_poly(poly++)

Type *type_repoly(Type *type);

//-- constraints

typedef struct { Type *first; Type *second; } Constraint;

Constraint *cons_make(Type *first, Type *second);
void cons_print(Constraint *cons);

/* Zips two lists of types into a list of constraints. Returns NULL if the lists have mismatched length. */
ConsList *cons_zip(TypeList *first, TypeList *second);


//-- substitution

typedef struct { int poly; Type *type; } Substitution;

Substitution *subst_make(int poly, Type *type);
void subst_print(Substitution *sub);

/* Applies a single substitution to the type */
Type *subst_sub(Substitution *sub, Type *type);



//--------------------------
//-- Type annotation

TypedAst *annotate_ast(Env *env, Ast *ast);
TypedAstList *annotate_list(Env *env, AstList *astlist);

//-- Constraint collection

void collect_cons(ConsList **lptr, TypedAst *ast);
void collect_cons_list(ConsList **lptr, TypedAstList *astlist);

//-- Unification

SubstList *unify_one(Type *first, Type *second);

//-- Apply

Type *apply_one(SubstList *subs, Type *type);
void apply_list(SubstList *subs, TypedAstList *ast);

#endif // _INFER_H_
