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


int name_addi, name_addf;
int name_subi, name_subf;
int name_muli, name_mulf;
int name_divi, name_divf;
int name_equal;
int name_lt, name_lte;
int name_gt, name_gte;
int name_compare;
int name_and, name_or;
int name_print_string;
int name_print_int;
int name_print_float;
int name_print_bool;
int name_int_of_float;
int name_float_of_int;
int name_hd, name_tl;


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
            hash_table_register_free_functions(name_table, NULL, NULL); // unregister for first table
            
            name_addi = add_name("+");
            name_subi = add_name("-");
            name_muli = add_name("*");
            name_divi = add_name("/");
            
            name_addf = add_name("+.");
            name_subf = add_name("-.");
            name_mulf = add_name("*.");
            name_divf = add_name("/."); 

            name_equal = add_name("=");
            name_lt = add_name("<");
            name_lte = add_name("<=");
            name_gt = add_name(">");
            name_gte = add_name(">=");
            name_compare = add_name("compare");

            name_and = add_name("&&");
            name_or = add_name("||");

            name_print_string = add_name("print_string");
            name_print_int = add_name("print_int");
            name_print_float = add_name("print_float");
            name_print_bool = add_name("print_bool");

            name_int_of_float = add_name("int_of_float");
            name_float_of_int = add_name("float_of_int");

            name_hd = add_name("hd");
            name_tl = add_name("tl");
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

