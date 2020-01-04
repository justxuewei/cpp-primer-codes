#include <iostream>

// top-level/low-level const
int main() {

    int i = 0;
    int *const p1 = &i; // we can't change the value of p1; const is top-level
    const int ci = 42; // we can't change ci; const is top-level
    const int *p2 = &ci; // we can't change ci through p2; const is low-level
    const int *const p3 = p2; // right-most const is top-level, left-most is not
    const int &r = ci; // const in reference types is always low-level

    // When we copy an object, top-level consts tend to be ignored.
    i = ci; // ok: copying the value of ci only; top-level const in ci is ignored
    p2 = p3; // ok: pointed-to type matches; top-level const in p3 is ignored

    return 0;
}