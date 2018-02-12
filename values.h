#ifndef _VALUES_H_
#define _VALUES_H_

#include <stdbool.h>

typedef struct env env_t;

enum expr_type {
    et_unit,
    et_int, et_float, et_bool, et_string,
    et_natfun1, et_natfun2,
    et_fun, et_tuple
};

typedef enum expr_type type_t;
typedef struct expr_value value_t;
typedef struct value_list vlist_t;

typedef value_t * (*natfun1_t)(value_t *);
typedef value_t * (*natfun2_t)(value_t *, value_t *);

struct value_list {
    size_t size;
    value_t *elem;
    struct value_list *next;
};

struct expr_value {
    int name;
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
MAKEVAL(int) (int name, int value);
MAKEVAL(float) (int name, float value);
MAKEVAL(bool) (int name, bool value);
MAKEVAL(string) (int name, char *value);
MAKEVAL(natfun1) (int name, natfun1_t fun);
MAKEVAL(natfun2) (int name, natfun2_t fun);
MAKEVAL(fun) (int name, env_t *env, namelist_t *params, ast_t *body);
MAKEVAL(tuple) (int name, vlist_t *elems);

void value_free(value_t *value);
void value_print(value_t *value);
void value_ptprint(value_t *value);

/* list */

vlist_t *vlist_make(value_t *head, vlist_t *tail);
vlist_t *vlist_rev(vlist_t *list);
void vlist_free(vlist_t *list);
void vlist_print(vlist_t *list);

#endif // _VALUES_H_
