#ifndef _VALUES_H_
#define _VALUES_H_

#include <stdbool.h>

struct expr_value {
    type_t type;
    union {
        int valInt;
        float valFloat;
        bool valBool;
        char *valString;
        natfun1_t valNatfun1;
        natfun2_t valNatfun2;
        struct { env_t *defsite;
                 NameList *params;
                 ast_t *body; } valFun;
        ValueList *valTuple;
    };
};


#define MAKEVAL(type) value_t *value_make_##type

MAKEVAL(unit) (void);
MAKEVAL(int) (int value);
MAKEVAL(float) (float value);
MAKEVAL(bool) (bool value);
MAKEVAL(string) (char *value);
MAKEVAL(natfun1) (natfun1_t fun);
MAKEVAL(natfun2) (natfun2_t fun);
MAKEVAL(fun) (env_t *env, NameList *params, ast_t *body);
MAKEVAL(tuple) (ValueList *elems);
MAKEVAL(error) (void);

void value_free(value_t *value);
void value_print(value_t *value);

/* list */

ValueList *vlist_make(value_t *head, ValueList *tail);
ValueList *vlist_rev(ValueList *list);

void vlist_free(ValueList *list);
void vlist_print(ValueList *list);

#endif // _VALUES_H_
