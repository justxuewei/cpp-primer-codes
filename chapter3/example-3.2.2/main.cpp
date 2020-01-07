#include <iostream>
#include <string>

using namespace std;

int main() {

    // Reading an unknown number of strings
    // string word;
    // while (cin >> word) {
    //     cout << word << endl;
    // }

    // Using getline to read an entire line
    string line;
    while(getline(cin, line))
        cout << line << endl;

    return 0;
}