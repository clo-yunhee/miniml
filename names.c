#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "names.h"

/*
 * in real life programs there can be many distinct names,
 * so better use a hash table than a simple linked lookup list
 *
 * note: could use something like a factor graph, to provide
 * some correction when the name doesn't exist but is close to
 * an existing one.
 */

typedef const char * hkey_t;
typedef int hvalue_t;

typedef unsigned int (*hfun_t)(hkey_t);

typedef struct bucket h_bucket; 
struct bucket {
    hkey_t key;
    hvalue_t value;
    
    struct h_bucket *next;
};

void init_table();
void free_table();

h_bucket *find_bucket(const char *name);
int find_name (const char *name);

unsigned int h_djb2(const char *str);

/* static */


static size_t capacity = 16;
static h_bucket *table = NULL;

static hfun_t hash = h_djb2;

// does not support resizing
int names_settablecap(int cap) {
    if (table != NULL) {
        fprintf(stderr, "Cannot resize name table after use");
        return -1;
    } else if (cap < 8) {
        fprintf(stderr, "Cannot set capacity lower than 8");
        return -1;
    } else {
        capacity = cap;
        return 0;
    }
}

int names_getid(const char *name) {

}

/* private */

void init_table() {
    table = calloc(capacity, sizeof(h_bucket));
}

void free_table() {
    free(table);
}

h_bucket *find_bucket(const char *name) {
    return table[hash(name) % capacity];
}

int find_name(const char *name) {

}



unsigned int h_djb2(const char *str) {
    unsigned int hash = 5381;
    char c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c;

    return hash;
}
