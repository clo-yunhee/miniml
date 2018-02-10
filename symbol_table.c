#include <stdio.h>
#include <stdlib.h>

#include "symbols.h"


typedef struct entry s_entry;
struct entry {
    symbol_t *sym;
    struct entry *next;
};

static size_t max_depth = 32;
static s_entry **table = NULL;

static int depth = 0; // depth 0 is the global scope


void symbols_setmaxdepth(int dp) {
    if (table != NULL) {
        fprintf(stderr, "Cannot resize symbol table after use");
    } else if (dp < 2) {
        fprintf(stderr, "Cannot set max depth lower than 2");
    } else {
        max_depth = dp;
    }
}

void symbols_init() {
    if (table != NULL) {
        fprintf(stderr, "Symbol table is already initialized");
    } else {
        table = calloc(max_depth, sizeof(s_entry));
        if (table == NULL) {
            fprintf(stderr, "Symbol table was not initialized");
        }
    }
}

void symbols_free() {
    if (table == NULL) {
        fprintf(stderr, "Symbol table is not initialized");
    } else {
        for (int i = 0; i <= depth; i++) {
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

bool symbols_search(int name, int depth, symbol_t **symref) {

}

symbol_t *symbols_define(symbol_t *sym) {
    
}

symbol_t *symbols_find(int name) {

}
