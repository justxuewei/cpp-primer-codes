#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    // begin() and end() test
    string s("some string");
    if (s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;

    // iterator increment
    s = "some string";
    for (auto it = s.begin(); it != s.end() && !isspace(*it); it++) {
        *it = toupper(*it);
    }
    cout << s << endl;

    // begin() and end() operations
    vector<int> v;
    const vector<int> cv;
    auto it1 = v.begin(); // it1 has type vector<int>::iterator
    auto it2 = cv.begin(); // it2 has type vector<int>::const_iterator
    auto it3 = v.cbegin(); // it3 has type vector<int>::const_iterator, although v is a non-const integer

    // binary search using iterators
    for (int i = 1; i != 21; i++) {
        v.push_back(i);
    }
    auto begin = v.begin(), end = v.end();
    // auto mid = (begin + end) / 2;
    auto mid = begin + (end - begin) / 2;
    int sought = 8;
    // please note that *mid is the value of what it points to
    while (sought != *mid && begin != end) {
        if (sought < *mid) {
            end = mid - 1;
        } else {
            begin = mid + 1;
        }
        mid = begin + (end - begin) / 2;
    }
    if (begin == end) {
        cout << sought << " is not found in vector v." << endl;
    } else {
        cout << sought << " is found in vector v." << endl;
    }

    return 0;
}