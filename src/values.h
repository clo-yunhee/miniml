#ifndef _VALUES_H_
#define _VALUES_H_

#include <stdbool.h>

struct expr_value {
    TypeEnum type;
    union {
        int valInt;
        double valFloat;
        bool valBool;
        char *valString;
        NativeDesc *valNative;
        struct { Env *defsite;
                 NameList *params;
                 Ast *body; } valFun;
        ValueList *valTuple;
        struct { Value *head;
                 Value *tail; } valList;
    };
};


#define MAKEVAL(type) Value *value_make_##type

MAKEVAL(int) (int value);
MAKEVAL(float) (double value);
MAKEVAL(bool) (bool value);
MAKEVAL(string) (char *value);
MAKEVAL(native) (NativeDesc *fn);
MAKEVAL(fun) (Env *env, NameList *params, Ast *body);
MAKEVAL(tuple) (ValueList *elems);
MAKEVAL(list) (Value *head, Value *tail);

void value_free(Value *value);
void value_print(Value *value);

/* list */

ValueList *vlist_make(Value *head, ValueList *tail);
ValueList *vlist_rev(ValueList *list);

void vlist_free(ValueList *list);
void vlist_print(ValueList *list);

/* primitives */

extern Value *vunit;
extern Value *verror;

#endif // _VALUES_H_
