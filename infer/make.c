#include "infer.h"



Substitution *subst_make(int poly, Type *type) {
    Substitution *st = malloc(sizeof(Substitution));
    if (st == NULL) return NULL;

    st->poly = poly;
    st->type = type;
    return st;
}


Constraint *cons_make(Type *first, Type *second) {
    Constraint *cons = malloc(sizeof(Constraint));
    if (cons == NULL) return NULL;

    cons->first = first;
    cons->second = second;

    return cons;
}

