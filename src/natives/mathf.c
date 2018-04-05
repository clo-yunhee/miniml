#include "nat.h"

NATFUN2(addf, x, y) {
    RFLOAT(x->valFloat + y->valFloat);
}

NATFUN2(subf, x, y) {
    RFLOAT(x->valFloat - y->valFloat);
}

NATFUN2(mulf, x, y) {
    RFLOAT(x->valFloat * y->valFloat);
}

NATFUN2(divf, x, y) {
    if (y->valFloat == 0) {
        fprintf(stderr, "Division by zero\n");
        RUNIT();
    }
    RFLOAT(x->valFloat / y->valFloat);
}
