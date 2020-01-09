#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<unsigned> bucket(11, 0);
    unsigned grade;

    cout << "Please input grade (press ctl+D if finished): " << endl;
    while (cin >> grade) {
        if (grade <= 100) {
            bucket[grade/10]++;
        }
    }
    // range for
    for (auto i: bucket) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}