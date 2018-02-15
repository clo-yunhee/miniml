#include "common.h"

void tdlist_free(TypeList *list) {
    list_foreach(list, (ListConsumer) type_free);
    list_free(list);
}

void tdlist_print(TypeList *list, const char *pref, const char *delim, const char *suff) {
    list_print(list, (ListPrintFunc) type_print, pref, delim, suff);
}

bool tdlist_equ(TypeList *first, TypeList *second) {
    ListIterator it1, it2;
    list_iterate(&first, &it1);
    list_iterate(&second, &it2);
    
    while (list_iter_has_more(&it1) && list_iter_has_more(&it2)) {
        typedata_t *type1 = list_iter_next(&it1);
        typedata_t *type2 = list_iter_next(&it2);
        
        if (!type_equ(type1, type2))
            return false;
    }

    // if not the same size, then false
    
    return list_iter_has_more(&it1) || list_iter_has_more(&it2);
}
