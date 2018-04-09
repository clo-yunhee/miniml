#include "common.h"

typedef void (*native_func_t)(void);
typedef Value * (*native_fn1_t)(Value *);
typedef Value * (*native_fn2_t)(Value *, Value *);

typedef struct native_function NativeDesc;

struct natcons { int i, j; };

struct native_function {
    /* the name table index for this function */
    int name;
    
    /* a generic function pointer for this function */
    native_func_t func;

    /* the types of arguments, in an array sized argCount */
    size_t argCount;
    Type **argTypes;

    /* the type of return value */
    Type *retType;

    /* a list of type constraints (pattern with arg index) */
    size_t consLength;
    struct natcons *cons;
};


/**
 * Initialises a native function entry, types not initialised
 */
NativeDesc *native_make(const char *name, native_func_t func) {
    NativeDesc *fn = malloc(sizeof(NativeDesc));
    memset(fn, 0, sizeof(NativeDesc));

    fn->name = names_getid(name);
    fn->func = func;

    return fn;
}

/**
 * Sets argument types, NULL terminated vararg list
 */
void native_args(NativeDesc *fn, Type *out, ...) {
    va_list ap;
    va_start(ap, out);

    fn->argCount = 0;
    int i = 0;
    size_t arrSize = 0;

    Type *cur;
    while ((cur = va_arg(ap, Type *)) != NULL) {
        ++fn->argCount;
        arrSize += fn->argCount * sizeof(Type *);
            
        //realloc is kinda costly but eh.
        fn->argTypes = realloc(fn->argTypes, arrSize);
        fn->argTypes[i++] = cur;
    }

    fn->retType = out;
}

/**
 * Sets argument type constraints
 */
void native_cons(NativeDesc *fn, size_t count, struct natcons cons[]) {
    fn->consLength = count;
    fn->cons = malloc(count * sizeof(struct natcons));

    for (unsigned int i = 0; i < count; ++i) {
        memcpy(&fn->cons[i], &cons[i], sizeof(struct natcons));
    }
}


/// native functions


void natives_init() {
    NativeDesc *fn = native_make("=", (native_func_t) native_equal);
    native_args(fn, tbool, tpoly, tpoly);
    native_cons(fn, 1, (struct natcons[]) { { 0, 1 } });
}

