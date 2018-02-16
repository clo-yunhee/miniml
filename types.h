#ifndef _TYPES_H_
#define _TYPES_H_

struct expr_typedata {
    TypeEnum type;
    union {
        struct { Type *from;
                 Type *to; } typeNatfun1;
        struct { Type *from1;
                 Type *from2;
                 Type *to; } typeNatfun2;
        struct { TypeList *args;
                 Type *to; } typeFun;
        TypeList *typeTuple;
        int typePoly;
    };
};

#define MAKETYPE(tname) Type *type_##tname

MAKETYPE(unit) (void);
MAKETYPE(int) (void);
MAKETYPE(float) (void);
MAKETYPE(bool) (void);
MAKETYPE(string) (void);
MAKETYPE(natfun1) (Type *from, Type *to);
MAKETYPE(natfun2) (Type *from1, Type *from2, Type *to);
MAKETYPE(fun) (TypeList *args, Type *to);
MAKETYPE(tuple) (TypeList *elems);
MAKETYPE(poly) (int number);
MAKETYPE(error) (void);

void type_free(Type *type);
void type_print(Type *type);

bool type_equ(Type *first, Type *second);

/* list */

void tdlist_free(TypeList *list);
void tdlist_print(TypeList *list,
        const char *pref, const char *delim, const char *suff);

bool tdlist_equ(TypeList *first, TypeList *second);

/* shorthands for primitives */

#define terror      (type_error())
#define tunit       (type_unit())
#define tint        (type_int())
#define tfloat      (type_float())
#define tbool       (type_bool())
#define tstring     (type_string())
#define tpoly1      (type_poly(1))
#define tpoly2      (type_poly(2))

#endif // _TYPES_H_
