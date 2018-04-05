#include "infer.h"


void cons_print(Constraint *cons) {
    printf("( ");
    type_print(cons->first);
    printf(" <-> ");
    type_print(cons->second);
    printf(" )");

}

void subst_print(Substitution *sub) {
    printf("[");
    printf("'%c", (char) ('a' + sub->poly - 1));
    printf(" / ");
    type_print(sub->type);
    printf("]");
}
