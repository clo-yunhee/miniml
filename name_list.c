#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "names.h"

static void print_nameptr(int *ptr) {
    printf("%s", names_getnm(*ptr));
}

void nmlist_print(NameList *list) {
    list_print(list, (ListPrintFunc) print_nameptr, "(", ", ", ")");
}

