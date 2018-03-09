#ifndef _INFER_H_
#define _INFER_H_

#include "../common.h"

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

/* Returns a list of all expressions, numbered, with 'X types. */
ArrayList *infer_numbering(Env *env, Ast *ast);


#endif // _INFER_H_
