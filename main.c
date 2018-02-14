#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "ast.h"
#include "symbols.h"
#include "environment.h"
#include "types.h"
#include "values.h"
#include "visit.h"

#include "miniml.tab.h"

extern int yyparse(void);

void main_init(void);
void main_free(void);

astlist_t *prog = NULL;


int main(int argc, char *argv[]) {
    // TODO: add option flags...
   
    main_init();
    atexit(main_free);

    switch (yyparse()) {
    case 0:
        // successful
        prog = alist_rev(prog);
        break;
    case 1:
        fprintf(stderr, "Invalid input\n");
        exit(EXIT_FAILURE);
    case 2:
        fprintf(stderr, "Out of memory\n");
        exit(EXIT_FAILURE);
    default:
        fprintf(stderr, "Unknown error\n");
        exit(EXIT_FAILURE);
    }

    /*
    alist_print(prog);
    printf("\n\n");
    */

    env_t *global_env = env_init(); 

    // usage example for visitor functions
    astlist_t *list = prog;
    while (list != NULL) {
        namelist_t *names = NULL;

        typedata_t *type = visit_type(global_env, list->elem, &names);

        if (!type_equ(type, terror)) { // if no error, evaluate
            value_t *value = visit_eval(global_env, list->elem);

            if (names->next == NULL) {
                global_env = env_make(names->name, type, value, global_env);
                env_print(global_env);
            } else {
                env_t *start = global_env;
                global_env = env_addlist(names, type->typeTuple, value->valTuple, global_env);

                env_printrange(global_env, start);
            }
        }

        list = list->next;
    }

    return EXIT_SUCCESS;
}

void main_init(void) {
    names_init();
}

void main_free(void) {
    alist_free(prog);
    names_free();
}
