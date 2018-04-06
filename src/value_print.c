#include "common.h"

void value_print_list(Value *list);

void vlist_print(ValueList *list) {
    list_print(list, (ListPrintFunc) value_print, "(", ", ", ")");
}

void value_print(Value *value) {
    switch (value->type) {
    case et_unit:
        printf("()");
        break;
    case et_int:
        printf("%d", value->valInt);
        break;
    case et_float:
        printf("%g", value->valFloat);
        break;
    case et_bool:
        printf("%s", (value->valBool ? "true" : "false"));
        break;
    case et_string:
        printf("\"%s\"", escape(value->valString));
        break;
    case et_natfun1:
    case et_natfun2:
        printf("<native-fun>");
        break;
    case et_fun:
        printf("<fun>");
        break;
    case et_tuple:
        vlist_print(value->valTuple);
        break;
    case et_list:
        printf("[");
        value_print_list(value);
        printf("]");
        break;
    case et_error:
    default:
        printf("???");
        break;
    }
}


void value_print_list(Value *list) {
    Value *head = list->valList.head;
    Value *tail = list->valList.tail;
    
    // nil => empty
    if (head == NULL) return;
    
    // print the head
    value_print(head);

    // and if the tail is not nil
    if (tail->valList.head != NULL) {
        printf("; ");
        value_print_list(tail);
    }
}
