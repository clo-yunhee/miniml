#ifndef _SYMBOLS_H_
#define _SYMBOLS_H_

#include <stdbool.h>

typedef struct symbol symbol_t;
typedef struct symlist symlist_t;

typedef enum symbol_standard_type {
    type_int, type_float, type_bool, type_string
} sym_typestd;

struct symlist {
    unsigned int size;
    symbol_t *elem;
    struct symlist *next;
};

typedef struct symbol symbol_t;
struct symbol {
    int name;
    enum {
        e_undefined, e_cstvar,
        e_typestd, e_typetup, e_typefun
    } type;
    union {
        // e_cstvar
        struct { void *value;
                 symbol_t *type; } symCstVar;
        // e_typestd
        sym_typestd symTypeStd;
        // e_typetup
        struct { symlist_t *types; } symTypeTuple;
        // e_typefun
        struct { symbol_t *from;
                 symbol_t *to; } symTypeFun;
    };
};

/* table */

void symbols_init();
void symbols_free();

void symbols_setmaxdepth(int max_depth);

symbol_t *symbols_define(symbol_t *sym); // returns sym or NULL if ambiguous name
symbol_t *symbols_find(int name); // defines UNDEFINED if not found

bool symbols_search(int name, int depth, symbol_t **symref);

/* symlist */

symlist_t *symlist_make(symbol_t *head, symlist_t *tail);
symlist_t *symlist_rev(symlist_t *list);
void symlist_free(symlist_t *list);
void symlist_print(symlist_t *list);

/* symbol */

#define MAKESYM(type) symbol_t *sym_make_##type 
MAKESYM(undefined) (int name);
MAKESYM(cstvar) (int name, void *value, symbol_t *type);
MAKESYM(typestd) (int name, sym_typestd type);
MAKESYM(typetup) (int name, symlist_t *types);
MAKESYM(typefun) (int name, symbol_t *from, symbol_t *to);

void sym_free(symbol_t *sym);
void sym_print(symbol_t *sym);

#endif // _SYMBOLS_H_
