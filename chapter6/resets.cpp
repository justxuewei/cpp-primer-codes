#include <iostream>

void reset(int *ip) {
    std::cout << "reset with a pointer is called." << std::endl;
    *ip = 0;
}

void reset(int &i) {
    std::cout << "reset with a reference is called." << std::endl;
    i = 0;
}

int main() {
    int i = 10;
    const int ci = i;
    std::string::size_type ctr = 0;

    // reset(&i);
    // std::cout << i << std::endl;

    

    return 0;
}
