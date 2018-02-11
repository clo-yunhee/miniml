#include <stdio.h>
#include <stdlib.h>

#include "ast.h"
#include "values.h"
#include "natives.h"

NATFUN2(addi, x, y) {
    return value_make_int(x->valInt + y->valInt);
}

NATFUN2(subi, x, y) {
    return value_make_int(x->valInt - y->valInt);
}

NATFUN2(muli, x, y) {
    return value_make_int(x->valInt * y->valInt);
}

NATFUN2(divi, x, y) {
    if (y->valInt == 0) {
        fprintf(stderr, "Division by zero\n");
        return value_make_unit();
    }
    return value_make_int(x->valInt / y->valInt);
}

NATFUN2(addf, x, y) {
    return value_make_float(x->valFloat + y->valFloat);
}

NATFUN2(subf, x, y) {
    return value_make_float(x->valFloat - y->valFloat);
}

NATFUN2(mulf, x, y) {
    return value_make_float(x->valFloat * y->valFloat);
}

NATFUN2(divf, x, y) {
    if (y->valFloat == 0) {
        fprintf(stderr, "Division by zero\n");
        return value_make_unit();
    }
    return value_make_float(x->valFloat / y->valFloat);
}

NATFUN1(print_string, s) {
    printf("%s", s->valString); 

    return value_make_unit();
}
