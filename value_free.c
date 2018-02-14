#include <stdlib.h>

#include "names.h"
#include "ast.h"
#include "environment.h"
#include "types.h"
#include "values.h"

void value_free(value_t *value) {
    if (value == NULL) return;

    switch (value->type) {
    case et_tuple:
        vlist_free(value->valTuple);
        break;
    default:
        break;
    }

    free(value);
}
