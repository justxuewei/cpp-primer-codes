#include <iostream>

using namespace std;

int main() {

    // array definiation
    unsigned cnt = 42;
    constexpr unsigned sz = 42;
    int arr[10]; // array of ten ints
    int *parr[sz]; // array of 42 pointers to int
    // string bad[cnt]; error: cnt is not a constant expression

    // explicit array initalization
    const unsigned size = 3;
    int ia1[sz] = {0, 1, 2}; // list initialization: array of three ints with values 0, 1, 2
    int a2[] = {0, 1, 2}; // an array of dimension 3
    int a3[5] = {0, 1, 2}; // equivalent to a3[] = {0, 1, 2, 0, 0}
    string a4[3] = {"hi", "bye"}; // same as a4[] = {"hi", "bye", ""}
    // int a5[2]; error: too many initializers

    // character arrays are special
    char c1[] = {'C', '+', '+'}; // list initialization, no null, the dimension of c1 is 3
    char c2[] = {'C', '+', '+', '\0'}; // list initialization, explict null, the demension of c2 is 4
    char c3[] = "C++"; // null terminator added automatically
    // const char c4[6] = "Daniel"; error: no space for the null!

    // no copy or assignment
    int a[] = {0, 1, 2};
    // int a2[] = a; error: cannot initialze one array with another
    // a2 = a; error: cannot assign one array to another

    // understanding complicated array declarations
    int *ptrs[10]; // ptrs is an array of ten pointers to int
    // int &refs[10]; error: no arrays of references
    int (*Parray)[10] = &arr; // Parray points to an array of ten ints
    int (&arrRef)[10] = arr; // arrRef refers to an array of ten ints
    int *(&arry)[10] = ptrs; // arry is a reference to an array of ten pointers

    // number counter of grades of array version
    unsigned scores[11] = {}; // 11 buckets, all value initialized to 0
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            scores[grade/10]++;
        }
    }

    return 0;
}