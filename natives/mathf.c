#include "nat.h"

#define RETF(v) return value_make_float(v)

NATFUN2(addf, x, y) {
    RETF(x->valFloat + y->valFloat);
}

NATFUN2(subf, x, y) {
    RETF(x->valFloat - y->valFloat);
}

NATFUN2(mulf, x, y) {
    RETF(x->valFloat * y->valFloat);
}

NATFUN2(divf, x, y) {
    if (y->valFloat == 0) {
        fprintf(stderr, "Division by zero\n");
        return value_make_unit();
    }
    RETF(x->valFloat / y->valFloat);
}
