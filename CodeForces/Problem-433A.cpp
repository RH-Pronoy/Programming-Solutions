// Problem Link: https://codeforces.com/problemset/problem/443/A
// Problem Name: A. Anton and Letters
//Rafsan Hasan Pronoy

#include <iostream>
#include <set>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    set<char> str;

    for (char c : s) {
        if (islower(c)) {
            str.insert(c);
        }
    }

    cout << str.size() << endl;

    return 0;
}
