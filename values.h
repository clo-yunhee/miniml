#ifndef _VALUES_H_
#define _VALUES_H_

#include <stdbool.h>

struct expr_valuelist {
    size_t size;
    value_t *elem;
    struct expr_valuelist *next;
};

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
                 namelist_t *params;
                 ast_t *body; } valFun;
        vlist_t *valTuple;
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
MAKEVAL(fun) (env_t *env, namelist_t *params, ast_t *body);
MAKEVAL(tuple) (vlist_t *elems);
MAKEVAL(error) (void);

void value_free(value_t *value);
void value_print(value_t *value);

/* list */

vlist_t *vlist_make(value_t *head, vlist_t *tail);
vlist_t *vlist_rev(vlist_t *list);
void vlist_free(vlist_t *list);
void vlist_print(vlist_t *list);

#endif // _VALUES_H_
