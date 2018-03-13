#ifndef _TYPES_H_
#define _TYPES_H_

struct expr_typedata {
    TypeEnum type;
    union {
        struct { TypeList *args;
                 Type *to; } typeFun;
        TypeList *typeTuple;
        int typePoly;
    };
};

#define MAKETYPE(tname) Type *type_##tname

MAKETYPE(fun1) (Type *from, Type *to);
MAKETYPE(fun2) (Type *from1, Type *from2, Type *to);
MAKETYPE(fun) (TypeList *args, Type *to);
MAKETYPE(tuple) (TypeList *elems);
MAKETYPE(poly) (int number);

void type_free(Type *type);
void type_print(Type *type);

bool type_equ(Type *first, Type *second);

/* list */

void tdlist_free(TypeList *list);
void tdlist_print(TypeList *list,
        const char *pref, const char *delim, const char *suff);

bool tdlist_equ(TypeList *first, TypeList *second);

/* shorthands for primitives */

extern Type *terror;
extern Type *tunit;
extern Type *tint;
extern Type *tfloat;
extern Type *tbool;
extern Type *tstring;
extern Type *tpoly;

/*#define terror      (type_error())
#define tunit       (type_unit())
#define tint        (type_int())
#define tfloat      (type_float())
#define tbool       (type_bool())
#define tstring     (type_string())
#define tpoly       (type_poly(0))*/

#endif // _TYPES_H_
