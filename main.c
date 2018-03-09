#include "common.h"

#include "miniml.tab.h"

extern int yyparse(void);

void main_init(void);
void main_free(void);

AstList *prog = NULL;


int main(int argc, char *argv[]) {
    // TODO: add option flags...
   
    main_init();
    atexit(main_free);

    switch (yyparse()) {
    case 0:
        // successful
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
    
    run_list(prog);

    return EXIT_SUCCESS;
}

void main_init(void) {
    names_init();
}

void main_free(void) {
    alist_free(prog);
    names_free();
}
