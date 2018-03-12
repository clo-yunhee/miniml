#include "infer.h"


SubstList *infer_unify(ConsList *constraints, bool *error) {
    if (constraints == NULL) return NULL;

    Constraint *cons = list_data(constraints);
    ConsList *next = list_next(constraints);

    SubstList *subs2 = infer_unify(next, error);
    
    Type *first = apply_one(subs2, cons->first, error);
    Type *second = apply_one(subs2, cons->second, error);

    SubstList *subs1 = unify_one(first, second, error);

    return list_concat(subs1, subs2);
}


SubstList *unify_one(Type *first, Type *second, bool *error) {
    if (type_equ(first, second)) return NULL;

    TypeEnum t1 = first->type;
    TypeEnum t2 = second->type;

    if (t1 == et_poly) return list_new(subst_make(first->typePoly, second));
    if (t2 == et_poly) return list_new(subst_make(second->typePoly, first));

    if (t1 == et_fun && t2 == et_fun) {
        ConsList *cons = cons_zip(first->typeFun.args, second->typeFun.args);
        if (cons == NULL) {
            IERR("Function type mismatch");
            return NULL;
        }

        list_prepend(&cons, cons_make(first->typeFun.to, second->typeFun.to));

        return infer_unify(cons, error);
    } 
    
    if (t1 == et_tuple && t2 == et_tuple) {
        ConsList *cons = cons_zip(first->typeTuple, second->typeTuple);
        if (cons == NULL) {
            IERR("Tuple type mismatch");
            return NULL;
        }

        return infer_unify(cons, error);
    }

    IERR("Type mismatch");
    return NULL;

}


