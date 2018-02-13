#include "nat.h"

NATFUN2(addi, x, y) {
    RINT(x->valInt + y->valInt);
}

NATFUN2(subi, x, y) {
    RINT(x->valInt - y->valInt);
}

NATFUN2(muli, x, y) {
    RINT(x->valInt * y->valInt);
}

NATFUN2(divi, x, y) {
    if (y->valInt == 0) {
        fprintf(stderr, "Division by zero\n");
        RUNIT();
    }
    RINT(x->valInt / y->valInt);
}
