#include <iostream>

int main() {

    int ival = 0;

    // Compound types: reference
    int &ref_ival = ival; // & is an operation for reference definition on the left-hand of the expression
    ref_ival = 42;
    std::cout << ref_ival << std::endl;

    // Compound types: pointer
    int *p = &ival; // p holds the address of ival; p is a pointer to ival; & is an address operation to get address of ival
    std::cout << *p << std::endl; // * yields the object to which p points

    *p = 0; // * yields the object; we assign a new value to ival through p
    std::cout << *p << std::endl;

    // Other pointer operations
    ival = 1024;
    int *pi1 = 0;
    int *pi2 = &ival;
    int *pi3 = nullptr;
    // pi1 has value 0, so condition evaluates as false
    if (pi1) {
        std::cout << "true condition of pi1 is triggered." << std::endl;
    } else {
        std::cout << "false condition of pi1 is triggered." << std::endl;
    }
    // pi2 points to ival, so it is not 0; the condition evaluates as true
    if (pi2) {
        std::cout << "true condition of pi2 is triggered." << std::endl;
    } else {
        std::cout << "false condition of pi2 is triggered." << std::endl;
    }
    // pi3 is nullptr which has the same value of 0
    if (pi3) {
        std::cout << "true condition of pi3 is triggered." << std::endl;
    } else {
        std::cout << "false condition of pi3 is triggered." << std::endl;
    }

    return 0;
}