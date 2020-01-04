#include <iostream>

// References to const
int main() {

    // non const couldn't reference to const
    const int ci = 1024;
    const int &r1 = ci; // ok: both reference and underlying object are const
    ri = 42; // error: r1 is a reference to const
    int &r2 = ci; // error: non const reference to a const object

    // const could reference to a non const
    int i = 42;
    int &ri1 = i; // r1i bound to i
    const int &ri2 = i; // ri2 also bound to i
    ri1 = 0; // ok
    ri2 = 0; // error: ri2 is a reference to const

    return 0;
}