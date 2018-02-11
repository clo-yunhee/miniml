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

typedef value_t * (*natfun1_t)(value_t *);
typedef value_t * (*natfun2_t)(value_t *, value_t *);

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
                 params_t *params;
                 ast_t *body; } valFun;
    };
};


#define MAKEVAL(type) value_t *value_make_##type

MAKEVAL(unit) (void);
MAKEVAL(int) (int value);
MAKEVAL(float) (float value);
MAKEVAL(bool) (bool value);
MAKEVAL(string) (char* value);
MAKEVAL(natfun1) (natfun1_t fun);
MAKEVAL(natfun2) (natfun2_t fun);
MAKEVAL(fun) (env_t *env, params_t *params, ast_t *body);

void value_print(value_t *value);

#endif // _VALUES_H_
