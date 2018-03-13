#include "nat.h"

NATFUN1(int_of_float, x) {
    RINT((int) x->valFloat);
}

NATFUN1(float_of_int, x) {
    RFLOAT((float) x->valInt);
}
