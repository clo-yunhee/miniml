#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "symbols.h"


static char chr_notesc[] = { ' ', '"', '\'', '\n', '\t', '\b', '\r', '\\' };
static char chr_escape[] = { ' ', '"', '\'',  'n',  't',  'b',  'r', '\\' };

static int nb_esc = sizeof(chr_escape) / sizeof(char);


char *unescape(const char *str) {
    // ignore the surrounding quotes
    size_t len = strlen(str) - 2;
    char *orig = strndup(str + 1, len);
    char *chptr = orig;

    // the resulting string will never exceed the original's length
    char *result = calloc(len + 1, sizeof(char));
    int k = 0;

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
    // double size to escape safely and the quotes
    size_t len = 2 * strlen(str) + 2;
    char *result = calloc(len + 1, sizeof(char));
    int k = 0;

    // ignore the leading quote
    ++str;
    result[k++] = '"'; 

    char c;
    int e;
    while ((c = *str++) != '\0' && k <= len) {
        if (c == '"' && *str == '\0') break; // ignore the trailing quote
        
        for (e = 0; e < nb_esc; ++e) {
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
    
    result[k++] = '"';
    result[k] = '\0';

    return result;
}
