#include <iostream>

int main() {

    int i = 0;
    int *ip = &i, &r = ip;

    std::cout << *ip << std::endl;

    return 0;
}