#ifndef _VALUES_H_
#define _VALUES_H_

#include <stdbool.h>

struct expr_value {
    TypeEnum type;
    union {
        int valInt;
        float valFloat;
        bool valBool;
        char *valString;
        NativeFunc1 valNatfun1;
        NativeFunc2 valNatfun2;
        struct { Env *defsite;
                 NameList *params;
                 Ast *body; } valFun;
        ValueList *valTuple;
    };
};


#define MAKEVAL(type) Value *value_make_##type

MAKEVAL(unit) (void);
MAKEVAL(int) (int value);
MAKEVAL(float) (float value);
MAKEVAL(bool) (bool value);
MAKEVAL(string) (char *value);
MAKEVAL(natfun1) (NativeFunc1 fun);
MAKEVAL(natfun2) (NativeFunc2 fun);
MAKEVAL(fun) (Env *env, NameList *params, Ast *body);
MAKEVAL(tuple) (ValueList *elems);
MAKEVAL(error) (void);

void value_free(Value *value);
void value_print(Value *value);

/* list */

ValueList *vlist_make(Value *head, ValueList *tail);
ValueList *vlist_rev(ValueList *list);

void vlist_free(ValueList *list);
void vlist_print(ValueList *list);

#endif // _VALUES_H_
