#include <string.h>

#include "nat.h"


int cmp_tuple(Value *x, Value *y);
int cmp_list(Value *x, Value *y);
int cmpi(int x, int y);
int cmpf(double x, double y);


NATFUN2(equal, x, y) {
    RBOOL(native_compare(x, y)->valInt == 0);
}
NATFUN2(lt, x, y) {
    RBOOL(native_compare(x, y)->valInt < 0);
}
NATFUN2(lte, x, y) {
    RBOOL(native_compare(x, y)->valInt <= 0);
}
NATFUN2(gt, x, y) {
    RBOOL(native_compare(x, y)->valInt > 0);
}
NATFUN2(gte, x, y) {
    RBOOL(native_compare(x, y)->valInt >= 0);
}

NATFUN2(and, x, y) {
    RBOOL(x->valBool && y->valBool);
}
NATFUN2(or, x, y) {
    RBOOL(x->valBool || y->valBool);
}

//structural comparison
NATFUN2(compare, x, y) {
    if (x->type != y->type) {
        fprintf(stderr, "Can't compare different types");
        RINT(-1);
    }

    switch (x->type) {
    case et_unit:
        RINT(0);
    case et_int:
        RINT(cmpi(x->valInt, y->valInt));
    case et_float:
        RINT(cmpf(x->valFloat, y->valFloat));
    case et_bool:
        RINT(cmpi(x->valBool, y->valBool)); // false < true
    case et_string:
        RINT(strcmp(x->valString, y->valString));
    case et_natfun:
    case et_fun:
        fprintf(stderr, "Cannot compare functional values");
        RINT(-1);
    case et_tuple:
        RINT(cmp_tuple(x, y));
    case et_list:
        RINT(cmp_list(x, y));
    default:
        fprintf(stderr, "Comparison not implemented yet");
        RINT(-1);
    }
}


int cmp_tuple(Value *x, Value *y) {
    ValueList *elx = x->valTuple;
    ValueList *ely = y->valTuple;

    if (list_length(elx) != list_length(ely)) {
        fprintf(stderr, "Can't compare different tuple types");
        return -1;
    }

    ListIterator itx, ity;
    list_iterate(&elx, &itx);
    list_iterate(&ely, &ity);

    int c = 0;

    while (c == 0 && list_iter_has_more(&itx) && list_iter_has_more(&ity)) {
        Value *vx = list_iter_next(&itx);
        Value *vy = list_iter_next(&ity);
        
        c = native_compare(vx, vy)->valInt;
    }
    
    return c;
}

int cmp_list(Value *x, Value *y) {
    // lexico order

    Value *xHead = x->valList.head; 
    Value *yHead = y->valList.head;

    if (xHead == NULL) {
        return (yHead == NULL) ? 0 : -1;
    }
    if (yHead == NULL) return 1;
    
    Value *xTail = x->valList.tail;
    Value *yTail = y->valList.tail;

    int c = native_compare(xHead, yHead)->valInt;

    if (c == 0) {
        return cmp_list(xTail, yTail);
    }
    return c;
}

int cmpi(int x, int y) {
    return (x < y) ? -1 : (x > y);
}

int cmpf(double x, double y) {
    return (x < y) ? -1 : (x > y);
}
