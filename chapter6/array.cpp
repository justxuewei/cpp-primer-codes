#include <iostream>
#include <iterator>

void print(const int *beg, const int *end) {
    while (beg != end) {
        std::cout << *beg++ << std::endl;
    }
}

int main() {
    int j[3] = {1, 2, 3};
    print(std::begin(j), std::end(j));
    return 0;
}