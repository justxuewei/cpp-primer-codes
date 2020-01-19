#include <iostream>
using namespace std;

int main() {

    unsigned scores[11]; // no initialization
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            scores[grade/10]++;
        }
    }

    return 0;
}