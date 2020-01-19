#include <iostream>
#include <vector>

using namespace std;

void printArray(int *array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void printVector(vector<int> v) {
    for (auto i: v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {

    constexpr size_t array_size = 10;
    int array1[array_size];
    for (size_t i = 0; i < array_size; i++) {
        array1[i] = i;
    }
    cout << "array1: ";
    printArray(array1, array_size);

    // instantiating a new array and assigning values from array1
    int array2[array_size];
    for (size_t i = 0; i < array_size; i++) {
        array2[i] = array1[i];
    }
    cout << "array2: ";
    printArray(array2, array_size);

    vector<int> vector1;
    decltype(vector1.size()) vector_size = 10;
    for (decltype(vector1.size()) i = 0; i < vector_size; i++) {
        vector1.push_back(i);
    }
    cout << "vector1: ";
    printVector(vector1);

    vector<int> vector2(vector1);
    cout << "vector2: ";
    printVector(vector2);

    return 0;
}