#include <string.h>

#include "nat.h"

#define CHKTYPES do { if (x->type != y->type) { fprintf(stderr, "Can't compare different types"); return value_make_bool(false); } } while (false)


int cmp_tuple(value_t *x, value_t *y);
int cmpi(int x, int y);
int cmpf(float x, float y);


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

//structural comparison
NATFUN2(compare, x, y) {
    CHKTYPES;

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
    case et_natfun1:
    case et_natfun2:
    case et_fun:
        fprintf(stderr, "Cannot compare functional values");
        RINT(-1);
    case et_tuple:
        RINT(cmp_tuple(x, y));
    default:
        fprintf(stderr, "Comparison not implemented yet");
        RINT(-1);
    }
}


int cmp_tuple(value_t *x, value_t *y) {
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
        value_t *vx = list_iter_next(&itx);
        value_t *vy = list_iter_next(&ity);
        
        c = native_compare(vx, vy)->valInt;
    }
    
    return c;
}

int cmpi(int x, int y) {
    return (x < y) ? -1 : (x > y);
}

int cmpf(float x, float y) {
    return (x < y) ? -1 : (x > y);
}
