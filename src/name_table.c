#include "common.h"

/*
 * in real life programs there can be many distinct names,
 * so better use a hash table than a simple linked lookup list
 *
 * note: could use something like a factor graph, to provide
 * some correction when the name doesn't exist but is close to
 * an existing one.
 */

static int add_name(char *name);

static HashTable *name_table = NULL; // name -> id
static HashTable *id_table = NULL; // id -> name

static int last_id = 1;


int names_getid(const char *name) {
    char *namedup = strdup(name);
    int *id = hash_table_lookup(name_table, namedup);
    return id != NULL ? *id : add_name(namedup);
}

const char *names_getnm(int id) {
    if (id == NO_NAME) return "<no-name>";
    const char *name = hash_table_lookup(id_table, &id); 
    return name != NULL ? name : "<undefined>";
}

void names_init(void) {
    if (name_table != NULL) {
        fprintf(stderr, "Name table is already initialized\n");
    } else {
        name_table = hash_table_new(string_hash, string_equal);
        id_table = hash_table_new(int_hash, int_equal);
        if (name_table == NULL || id_table == NULL) {
            fprintf(stderr, "Name table was not initialized\n");
            if (name_table != NULL) {
                hash_table_free(name_table);
                name_table = NULL;
            }
            if (id_table != NULL) {
                hash_table_free(id_table);
                id_table = NULL;
            }
        } else {
            hash_table_register_free_functions(name_table, NULL, NULL);
        }
    } 
}

void names_free(void) {
    if (name_table == NULL) {
        fprintf(stderr, "Name table is not initialized\n");
    } else {
        hash_table_free(name_table);
        hash_table_free(id_table);

        name_table = NULL;
        id_table = NULL;
    }
}

/* private */

static int add_name(char *name) {
    int *id = malloc(sizeof(int));
    *id = ++last_id;
    
    hash_table_insert(name_table, name, id);
    hash_table_insert(id_table, id, name);

    return last_id;
}

