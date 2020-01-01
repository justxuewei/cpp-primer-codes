#include <iostream>

int main() {
    int i = 100, sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += i;
    }
    // i defined in the block for "for loop" is replaced by global one
    std::cout << i << " " << sum << std::endl;
}