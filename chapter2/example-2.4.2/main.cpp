#include <iostream>

// Pointers to const
int main() {

    // non const couldn't point to const
    const double pi = 3.14;
    double *ptr = &pi; // error: ptr is a plain pointer
    const double *cptr = &pi; // ok: cptr may point to a double that is const
    *cptr = 42; // error: cannot assign to *cptr

    // as with references, const could point to non const
    double dval = 3.14;
    cptr = &dval; // ok: but can't change dval through cptr

    // const pointers, a feature that references haven't
    int errNumb = 0;
    int *const curErr = &errNumb; // curErr will always point to errNumb
    const double *const pip = &pi; // pip is a const pointer to a const object

    *pip = 2.72; // error: pip is a pointer to const
    if (*curErr) {
        // error handler
        *curErr = 0; // ok: reset the value of the object to which curErr is bound
    }

    return 0;
}