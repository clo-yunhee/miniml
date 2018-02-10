#include <stdlib.h>

#include "symbols.h"


void sym_free(symbol_t *sym) {
    if (sym == NULL) return;

    switch (sym->type) {
    case e_cstvar:
        free(sym->symCstVar.value);
        break;
    case e_typetup:
        free(sym->symTypeTuple.types); // free array itself, not the elts
        break;
    default:
        break;
    }

    free(sym);
}
