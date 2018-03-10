#ifndef _INFER_H_
#define _INFER_H_

#include "../common.h"

#define IERR(str)        fprintf(stderr, str "\n")
#define IERR2(str, ...)  fprintf(stderr, str "\n", __VA_ARGS__);

typedef struct typed_ast TypedAst;
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
        struct { NameList *names;
                 bool rec;
                 NameList *params;
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

typedef ListEntry SubstList;
typedef struct { int name; Type *type; } Substitution;
Substitution *subst_make(int name, Type *type);

typedef ListEntry ConsList;
typedef struct { Type *first; Type *second; } Constraint;
Constraint *cons_make(Type *first, Type *second);

#endif // _INFER_H_
