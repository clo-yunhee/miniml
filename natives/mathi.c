#include "nat.h"

#define RETI(v) return value_make_int(v)

NATFUN2(addi, x, y) {
    RETI(x->valInt + y->valInt);
}

NATFUN2(subi, x, y) {
    RETI(x->valInt - y->valInt);
}

NATFUN2(muli, x, y) {
    RETI(x->valInt * y->valInt);
}

NATFUN2(divi, x, y) {
    if (y->valInt == 0) {
        fprintf(stderr, "Division by zero\n");
        return value_make_unit();
    }
    RETI(x->valInt / y->valInt);
}
