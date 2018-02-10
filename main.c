#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "ast.h"
#include "symbols.h"

#include "miniml.tab.h"

extern int yyparse(void);

void main_init(void);
void main_free(void);

astlist_t *prog = NULL;


int main(int argc, char *argv[]) {
    // TODO: add option flags...
   
    main_init();
    atexit(main_free);

    astlist_t *instrs;

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

    alist_print(prog);
    printf("\n");
    
    return EXIT_SUCCESS;
}

void main_init(void) {
    names_init();
    symbols_init();
}

void main_free(void) {
    alist_free(prog);
    names_free();
    symbols_free();
}
