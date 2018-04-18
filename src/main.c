#include "common.h"

#include "../obj/miniml.tab.h"

extern int yyparse(void);

void main_args(int argc, char *argv[]);
void main_init(void);
void main_free(void);

AstList *prog = NULL;
extern FILE *yyin;


/* argument values */
static int flag_stdin;
static int flag_execute;
int flag_debug;
static char *infile;
static char *outfile;

/* arguments */
static struct option long_options[] = {
    { "source",  required_argument, NULL, 'i' },
    { "stdin",   no_argument,       NULL, 's' },
    { "target",  required_argument, NULL, 'o' },
    { "execute", no_argument,       NULL, 'e' },
    { "debug",   no_argument,       NULL, 'd' },

    /* Terminating entry */
    { NULL, 0, NULL, 0 }
};

#define USAGE_STRING "Usage: %s [--source infile|--stdin] [--target outfile|--execute] (--debug)"




int main(int argc, char *argv[]) {
    main_args(argc, argv);
   
    main_init();
    atexit(main_free);

    yyin = fopen(infile, "r");
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
    
    
    /*
     * To perfom static analysis at compilation, run the type inference on the expressions.
     * Since it also checks for sound expressions, this counts as static analysis.
     * Theoretically, the only error that can remain at runtime is the currying of native functions,
     * as the actual type of a function can only be determined at runtime.
     */

    bool error = false;

    // Execute only in interpreter mode.
    run_list(prog, flag_execute, &error);

    if (error) {
        fprintf(stderr, "Error in expression\n");
        exit(EXIT_FAILURE);
    }

    // If compiling, do generate code.
    if (outfile != NULL) {
        FILE *fout = fopen(outfile, "w");
        if (fout == NULL) {
            fprintf(stderr, "Could not open output file: %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        generate_code(fout, prog);
        fclose(fout);
    }

    return EXIT_SUCCESS;
}

void main_args(int argc, char *argv[]) {
    int ch;
    
    flag_stdin = false;
    flag_execute = false;
    flag_debug = false;
    infile = outfile = NULL;

    while ((ch = getopt_long(argc, argv, "i:o:sed", long_options, NULL)) != -1) {
        switch (ch) {
        // input
        case 'i':
            free(infile);
            infile = strdup(optarg);
            break;
        // output
        case 'o':
            free(outfile);
            outfile = strdup(optarg);
            break;
        case 's':
            flag_stdin = true;
            break;
        case 'e':
            flag_execute = true;
            break;
        case 'd':
            flag_debug = true;
            break;
        case '?':
            break;
        default:
            fprintf(stderr, USAGE_STRING "\n", argv[0]);
            exit(EXIT_FAILURE);
        }
    }

    if (optind < argc
            || (infile == NULL && !flag_stdin)
            || (outfile == NULL && !flag_execute)) {
        fprintf(stderr, USAGE_STRING "\n", argv[0]);
        exit(EXIT_FAILURE);
    }

}

void main_init(void) {
    names_init();
    natives_init();
}

void main_free(void) {
    alist_free(prog);
    names_free();
}
