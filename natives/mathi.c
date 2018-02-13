#include <limits.h>

#include "nat.h"


#define ADD_OVERFLOW(a, b, min, max) \
    ((b) < 0                        \
     ? (a) < (min) - (b)            \
     : (max) - (b) < (a))

#define SUB_OVERFLOW(a, b, min, max) \
    ((b) < 0                        \
     ? (max) + (b) < (a)            \
     : (a) < (min) + (b))           \

#define MUL_OVERFLOW(a, b, min, max) \
    ((b) < 0                        \
     ? ((a) < 0                     \
        ? (a) < (max) / (b)         \
        : (b) == -1                 \
        ? 0                         \
        : (min) / (b) < (a))        \
     : (b) == 0                     \
     ? 0                            \
     : ((a) < 0                     \
        ? (a) < (min) / (b)         \
        : (max) / (b) < (a)))

#define DIV_OVERFLOW(a, b, min, max) \
    ((min) < 0 && (b) == -1 && (a) < - (max))


NATFUN2(addi, x, y) {
    int valx = x->valInt;
    int valy = y->valInt;
    if (ADD_OVERFLOW(valx, valy, INT_MIN, INT_MAX)) {
        fprintf(stderr, "Integer add overflow\n");
    }
    RINT(valx + valy);
}

NATFUN2(subi, x, y) {
    int valx = x->valInt;
    int valy = y->valInt;
    if (SUB_OVERFLOW(valx, valy, INT_MIN, INT_MAX)) {
        fprintf(stderr, "Integer subtract overflow\n");
    }
    RINT(valx - valy);
}

NATFUN2(muli, x, y) {
    int valx = x->valInt;
    int valy = y->valInt;
    if (MUL_OVERFLOW(valx, valy, INT_MIN, INT_MAX)) {
        fprintf(stderr, "Integer multiply overflow\n");
    }
    RINT(valx * valy);
}

NATFUN2(divi, x, y) {
    int valx = x->valInt;
    int valy = y->valInt;
    if (valy == 0) {
        fprintf(stderr, "Division by zero\n");
        RUNIT();
    }
    if (DIV_OVERFLOW(valx, valy, INT_MIN, INT_MAX)) {
        fprintf(stderr, "Integer division overflow\n");
    }
    RINT(valx / valy);
}



