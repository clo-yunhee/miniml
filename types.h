#ifndef _TYPES_H_
#define _TYPES_H_

struct expr_typedata_list {
    size_t size;
    typedata_t *elem;
    struct expr_typedata_list *next;
};

struct expr_typedata {
    type_t type;
    union {
        struct { typedata_t *from;
                 typedata_t *to; } typeNatfun1;
        struct { typedata_t *from1;
                 typedata_t *from2;
                 typedata_t *to; } typeNatfun2;
        struct { tdlist_t *args;
                 typedata_t *to; } typeFun;
        tdlist_t *typeTuple;
        int typePoly;
    };
};

#define MAKETYPE(tname) typedata_t *type_##tname

MAKETYPE(unit) (void);
MAKETYPE(int) (void);
MAKETYPE(float) (void);
MAKETYPE(bool) (void);
MAKETYPE(string) (void);
MAKETYPE(natfun1) (typedata_t *from, typedata_t *to);
MAKETYPE(natfun2) (typedata_t *from1, typedata_t *from2, typedata_t *to);
MAKETYPE(fun) (tdlist_t *args, typedata_t *to);
MAKETYPE(tuple) (tdlist_t *elems);
MAKETYPE(poly) (int number);
MAKETYPE(error) (void);

void type_free(typedata_t *type);
void type_print(typedata_t *type);

bool type_equ(typedata_t *first, typedata_t *second);

/* list */

tdlist_t *tdlist_make(typedata_t *head, tdlist_t *tail);
tdlist_t *tdlist_rev(tdlist_t *list);
void tdlist_free(tdlist_t *list);
void tdlist_print(tdlist_t *list,
        const char *pref, const char *delim, const char *suff);

bool tdlist_equ(tdlist_t *first, tdlist_t *second);

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
