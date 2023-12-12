#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main() {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    if (n >= 1 && n <= 9) {
        if (n == 1) {
            cout << "one";
        } else if (n == 2) {
            cout << "two";
        } else if (n == 3) {
            cout << "three";
        } else if (n == 4) {
            cout << "four";
        } else if (n == 5) {
            cout << "five";
        } else if (n == 6) {
            cout << "six";
        } else if (n == 7) {
            cout << "seven";
        } else if (n == 8) {
            cout << "eight";
        } else if (n == 9) {
            cout << "nine";
        }
    } else {
        cout << "Greater than 9";
    }

    return 0;
}

string ltrim(const string &str) {
    size_t start = str.find_first_not_of(" \t\r\n");
    return (start == string::npos) ? "" : str.substr(start);
}

string rtrim(const string &str) {
    size_t end = str.find_last_not_of(" \t\r\n");
    return (end == string::npos) ? "" : str.substr(0, end + 1);
}
