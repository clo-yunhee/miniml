#ifndef _ENVIRONMENT_H_
#define _ENVIRONMENT_H_

typedef struct env Env;

typedef struct expr_value Value;
typedef struct expr_typedata Type;

/* expr */

typedef enum expr_type {
    et_unit,
    et_int, et_float, et_bool, et_string,
    et_natfun, et_fun,
    et_tuple, et_list,

    et_poly, et_error
} TypeEnum;

typedef Value * (*NativeFunc1)(Value *);
typedef Value * (*NativeFunc2)(Value *, Value *);

/* env */

struct env {
    int name;
    Type *type;
    Value *value; 

    Env *next;
};

void env_free(Env *env);

Env *env_make(int name, Type *type, Value *value, Env *tail);
Env *env_addlist(NameList *names, TypeList *types, ValueList *values, Env *tail);

Env *env_find(int name, Env *env);

void env_print(Env *env);
void env_printrange(Env *env, Env *from);
void env_printall(Env *env);

#define env_tmake(name, type, tail)   env_make(name, type, NULL, tail)
#define env_vmake(name, value, tail)  env_make(name, NULL, value, tail)

#endif // _ENVIRONMENT_H_
