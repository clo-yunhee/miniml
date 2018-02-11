#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "symbols.h"

typedef struct entry s_entry;
struct entry {
    symbol_t *sym;
    struct entry *next;
};

static size_t max_depth = 32;
static s_entry **table = NULL;

static int cur_depth = 0; // depth 0 is the global scope


void symbols_setmaxdepth(int dp) {
    if (table != NULL) {
        fprintf(stderr, "Cannot resize symbol table after use\n");
    } else if (dp < 2) {
        fprintf(stderr, "Cannot set max depth lower than 2\n");
    } else {
        max_depth = dp;
    }
}

void symbols_init() {
    if (table != NULL) {
        fprintf(stderr, "Symbol table is already initialized\n");
    } else {
        table = calloc(max_depth, sizeof(s_entry));
        if (table == NULL) {
            fprintf(stderr, "Symbol table was not initialized\n");
        } else {
            // if the table is properly allocated then define standard objects

            symbols_define(sym_make_typestd(NO_NAME, type_int));
            symbols_define(sym_make_typestd(NO_NAME, type_float));
            symbols_define(sym_make_typestd(NO_NAME, type_bool));
            symbols_define(sym_make_typestd(NO_NAME, type_string));

        }
    }
}

void symbols_free() {
    if (table == NULL) {
        fprintf(stderr, "Symbol table is not initialized\n");
    } else {
        for (int i = 0; i < max_depth; ++i) {
            s_entry *entry = table[i];
            s_entry *prev;
            while (entry != NULL) {
                sym_free(entry->sym);

                prev = entry;
                entry = entry->next;
                free(prev);
            }
        }
        free(table);

        table = NULL;
    }
}

// access functions

//TODO: write those

bool symbols_search(int name, int depth, symbol_t **symref) {
    if (depth < 0 || depth >= max_depth) {
        fprintf(stderr, "Symbol table depth (%d) is out of bounds\n", depth);
        return false;
    }
    if (depth > cur_depth) {
        fprintf(stderr, "Symbol table depth (%d) is outside the current depth (%d)\n", depth, cur_depth);
        return false;
    }

    s_entry *entry = table[depth];
    while (entry != NULL) {
        if (entry->sym->name == name) {
            if (symref != NULL)
                *symref = entry->sym;
            return true;
        }
        entry = entry->next;
    }

    return false;
}

symbol_t *symbols_define(symbol_t *sym) {
    if (sym == NULL) return NULL;
    int name = sym->name;
    if (name != NO_NAME && symbols_search(name, cur_depth, NULL)) {
        fprintf(stderr, "Ambiguous name: %s\n", names_getnm(name));
        return NULL;
    }

    s_entry *entry = malloc(sizeof(s_entry));
    entry->sym = sym;
    entry->next = table[cur_depth];
    table[cur_depth] = entry;

    return sym;
}

symbol_t *symbols_find(int name) {
    symbol_t *sym;
    for (int dp = cur_depth; dp >= 0; --dp) {
        if (symbols_search(name, dp, &sym))
            return sym;
    }
    fprintf(stderr, "Undefined name: %s\n", names_getnm(name));
    symbols_define(sym_make_undefined(name));
    return NULL;
}

