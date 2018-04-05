#include "common.h"


static char chr_notesc[] = { ' ', '\'', '"', '\n', '\t', '\b', '\r', '\\' };
static char chr_escape[] = { ' ', '\'', '"',  'n',  't',  'b',  'r', '\\' };

static int nb_esc = sizeof(chr_escape) / sizeof(char);


char *unescape(const char *str) {
    size_t len = strlen(str);
    char *orig = strndup(str, len);
    char *chptr = orig;

    // the resulting string will never exceed the original's length
    char *result = calloc(len + 1, sizeof(char));
    unsigned int k = 0;

    char c;
    int e;
    while ((c = *chptr++) != '\0' && k <= len) {
        if (c == '\\') {
            c = *chptr++;
            if (c == '\0') break;

            for (e = 0; e < nb_esc; ++e) {
                if (c == chr_escape[e]) {
                    result[k++] = chr_notesc[e];
                    break;
                }
            }

            if (e == nb_esc) {
                fprintf(stderr, "Invalid escape code: '\\%c' \n", c);
                result[k++] = '\\';
                result[k++] = c;
            }
        } else {
            result[k++] = c;
        }
    }

    result[k] = '\0';
    
    free(orig);

    return result;
}


char *escape(const char *str) {
    // double size to escape safely
    size_t len = 2 * strlen(str);
    char *result = calloc(len + 1, sizeof(char));
    unsigned int k = 0;

    char c;
    int e;
    while ((c = *str++) != '\0' && k <= len) {
        for (e = 2; e < nb_esc; ++e) {
            if (c == chr_notesc[e]) {
                result[k++] = '\\';
                result[k++] = chr_escape[e];
                break;
            }
        }
        if (e == nb_esc) {
            result[k++] = c;
        }
    }
    
    result[k] = '\0';

    return result;
}
