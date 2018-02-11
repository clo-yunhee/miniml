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

typedef char * hkey_t;
typedef int hvalue_t;

typedef unsigned int (*hfun_t)(hkey_t);

typedef struct bucket h_bucket; 
struct bucket {
    hkey_t key;
    hvalue_t value;
    
    struct bucket *next;
};

static h_bucket *find_bucket(const char *name);
static int find_name(const char *name);
static int add_name(const char *name);

static unsigned int h_djb2(char *str);

static size_t capacity = 16;
static h_bucket **table = NULL;
static hfun_t hash = h_djb2; 

static int last_id = 1;


int name_int;
int name_float;
int name_bool;
int name_string;


// does not support resizing
void names_settablecap(int cap) {
    if (table != NULL) {
        fprintf(stderr, "Cannot resize name table after use\n");
    } else if (cap < 8) {
        fprintf(stderr, "Cannot set capacity lower than 8\n");
    } else {
        capacity = cap;
    }
}

int names_getid(const char *name) {
    int id = find_name(name);
    if (id == -1) {
        id = add_name(name);
    }
    return id;
}

const char *names_getnm(int id) {
    // TODO: might want to implement a reverse table
    // but this function is only there for human-readable output
    // we will scan through every the table

    for (int i = 0; i < capacity; ++i) {
        h_bucket *bk = table[i];
        while (bk != NULL) {
            if (bk->value == id) {
                return bk->key;
            }
            bk = bk->next;
        }
    }

    return "<undefined>";
}

void names_init(void) {
    if (table != NULL) {
        fprintf(stderr, "Name table is already initialized\n");
    } else {
        table = calloc(capacity, sizeof(h_bucket));
        if (table == NULL) {
            fprintf(stderr, "Name table was not initialized\n");
        }
    } 
}

void names_free(void) {
    if (table == NULL) {
        fprintf(stderr, "Name table is not initialized\n");
    } else {
        for (int i = 0; i < capacity; ++i) {
            h_bucket *bk = table[i];
            h_bucket *prev;
            while (bk != NULL) {
                free(bk->key); // because we dup the keys

                prev = bk;
                bk = bk->next;
                free(prev);
            }
        }
        free(table);

        table = NULL;
    }
}

/* private */

static h_bucket *find_bucket(const char *name) {
    return table[hash((char *) name) % capacity];
}

static int find_name(const char *name) {
    h_bucket *bk = find_bucket(name);
    while (bk != NULL) {
        if (strcmp(bk->key, name) == 0) { // if equal
            return bk->value;
        }
        bk = bk->next;
    }
    return -1;
}

static int add_name(const char *name) {
    // assume that the name is not already in the table
    h_bucket *entry = malloc(sizeof(h_bucket));
    entry->key = strdup(name);
    entry->value = ++last_id;
    
    unsigned int k = hash((char *) name) % capacity;
    entry->next = table[k];
    table[k] = entry;
    
    return last_id;
}

/* hashes */

static unsigned int h_djb2(char *str) {
    unsigned int hash = 5381;
    char c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */


    return hash;
}
