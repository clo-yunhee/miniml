#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "names.h"
#include "ast.h"

void alist_print(AstList *list) {
    list_print(list, (ListPrintFunc) ast_print, "[", ", ", "]");
}
