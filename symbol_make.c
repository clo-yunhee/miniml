#include <stdio.h>
#include <stdlib.h>

#include "symbols.h"

/*
 * be careful to not free any symbol_t pointer,
 * these are all freed by the symbol table function
 */


#define DECLSYM(t) \
    symbol_t *sym = malloc(sizeof(symbol_t)); \
    if (sym == NULL) return NULL; \
    sym->type = t; \
    sym->name = name;


MAKESYM(undefined) (int name) {
    DECLSYM(e_undefined);
    return sym;
}

MAKESYM(cstvar) (int name, void *value, symbol_t *type) {
    DECLSYM(e_cstvar);
    sym->symCstVar.value = value;
    sym->symCstVar.type = type;
    return sym;
}

MAKESYM(typestd) (int name, sym_typestd type) {
    DECLSYM(e_typestd);
    sym->symTypeStd = type;
    return sym;
}

MAKESYM(typetup) (int name, symlist_t *types) {
    DECLSYM(e_typetup);
    sym->symTypeTuple.types = types;
    return sym;
}

MAKESYM(typefun) (int name, symbol_t *from, symbol_t *to) {
    DECLSYM(e_typefun);
    sym->symTypeFun.from = from;
    sym->symTypeFun.to = to;
    return sym;
}


