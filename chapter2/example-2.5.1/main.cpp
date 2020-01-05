#include <iostream>

int main() {

    typedef char *pstring;
    const pstring cstr = 0; // cstr is a constant pointer to char
    const pstring *ps; // ps is a pointer to a constant pointer to char

    /**
     * Please Notice: 
     * 
     * It is tempting, albeit incorrect, that interpret "const pstring cstr" 
     * as "const char *cstr", which means that "cstr is a pointer to a 
     * const char", however the true interpretation is "char *const cstr" which
     * means that "cstr is a constant pointer to char" as metioned above.
     */

    // The type by deducing will drop top-level const and preserve low-level const
    int i = 0, &r = i;
    auto a = r; // a is an int

    const int ci = i, &cr = ci;
    auto b = ci; // b is an int (top-level const in ci is dropped)
    auto c = cr; // c is an int
    auto d = &i; // d is an int*
    auto e = &ci; // e is const int* (& of a const object is low-level const)
    const auto f = ci; // deduced type of ci is int; f has type const int

    auto &g = ci; // g is a const int& that is bound to ci
    auto &h = 42; // error: we can't bind a plain reference to a literal
    const auto &j = 42; // ok: we can bind a const reference to a literal

    return 0;
}