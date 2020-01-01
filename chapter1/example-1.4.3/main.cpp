#include <iostream>

int main() {
    int sum = 0, value = 0;
    // std::cin operand will be true unless user inputs a non-integer value
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}