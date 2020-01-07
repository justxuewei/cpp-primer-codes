#include <iostream>

using namespace std;

int main() {

    // processing every characters
    string str("some string");
    for (auto c: str) {
        cout << c << endl;
    }

    // counting the number of punctuation characters
    string str1("Hello World!!!");
    decltype(str1.size()) punct_cnt = 0;
    for (auto c: str1) {
        if (ispunct(c)) {
            punct_cnt++;
        }
    }
    cout << punct_cnt << " punctuation characters in " << str1 << endl;

    // using a subscript for iteration
    str = "some string";
    for (decltype(str.size()) index = 0; index != str.size() && !isspace(str[index]); index++) {
        str[index] = toupper(str[index]);
    }
    cout << str << endl;

    // using a subscript for random access
    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 an 15 separated by spaces. Hit ENTER and Ctl+D when finished: " << endl;
    string result;
    decltype(hexdigits.size()) n;
    while (cin >> n) {
        if (n < hexdigits.size())
            result += hexdigits[n];
    }
    cout << "Your hex number is: " << result << endl;
    
    return 0;

}