#include <iostream>

using namespace std;

int main() {

    constexpr size_t arraySize = 10;
    int ia[arraySize];
    // error: the beginning index should be zero.
    for (size_t ix = 1; ix <= arraySize; ix++) {
        ia[ix] = ix;
    }   

    return 0;
}