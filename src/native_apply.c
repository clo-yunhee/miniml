#include "common.h"


#define arg1  list_nth_data(args, 0)
#define arg2  list_nth_data(args, 1)

#define apply(type, ...)  ((type) fn->func)(__VA_ARGS__)


Value *native_apply(NativeDesc *fn, ValueList *args) {

    unsigned int paramCount = list_length(fn->args);
    unsigned int argCount = list_length(args);

    if (paramCount != argCount) {
        fprintf(stderr, "Argument count mismatch");
        return verror;
    }

    switch (paramCount) {
    case 1:
        return apply(native_fn1_t, arg1);
    case 2:
        return apply(native_fn2_t, arg1, arg2);
    default:
        fprintf(stderr, "Native apply param count not implemetned yet");
        return verror;
    }

}
