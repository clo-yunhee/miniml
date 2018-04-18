#ifndef _NATIVES_H_
#define _NATIVES_H_


typedef void (*native_func_t)(void);
typedef Value * (*native_fn1_t)(Value *);
typedef Value * (*native_fn2_t)(Value *, Value *);

typedef struct native_function NativeDesc;

struct native_cons { Type *first, *second; };

struct native_function {
    /* the name table index for this function */
    int name;
    
    /* a generic function pointer for this function */
    native_func_t func;

    /* the types of arguments */
    TypeList *args;

    /* the type of return value */
    Type *retType;

    /* a list of type constraints (pattern with arg index) */
    ListEntry *consList;
};


/*--- Cons ---*/

/*Init without types*/
NativeDesc *native_make(const char *name, native_func_t func);

/*Assign fun types*/
void native_args(NativeDesc *fn, Type *out, ...);

/*Assign fun type constraints*/
void native_cons(NativeDesc *fn, Type *first, Type *second);

/*Get type from pattern*/
Type *native_actual_type(NativeDesc *fn, Type *type);

/*Invoke the function*/
Value *native_apply(NativeDesc *fn, ValueList *args);

/*--- Add ---*/

/*Init the collection of native functions*/
void natives_init();

/*Fill the environment with native functions*/
Env *natives_env(Env *env);


#define NATFUN1(name, arg) Value * native_##name (Value * arg )
#define NATFUN2(name, arg1, arg2) Value * native_##name (Value * arg1 , Value * arg2 )

NATFUN2(addi, x, y);
NATFUN2(subi, x, y);
NATFUN2(muli, x, y);
NATFUN2(divi, x, y);

NATFUN2(addf, x, y);
NATFUN2(subf, x, y);
NATFUN2(mulf, x, y);
NATFUN2(divf, x, y);

NATFUN2(compare, x, y);
NATFUN2(equal, x, y);
NATFUN2(lt, x, y);
NATFUN2(gt, x, y);
NATFUN2(lte, x, y);
NATFUN2(gte, x, y);
NATFUN2(and, x, y);
NATFUN2(or, x, y);

NATFUN1(print_string, str);
NATFUN1(print_int, x);
NATFUN1(print_float, x);
NATFUN1(print_bool, x);

NATFUN1(int_of_float, x);
NATFUN1(float_of_int, x);

NATFUN1(hd, lst);
NATFUN1(tl, lst);


#endif // _NATIVES_H_
