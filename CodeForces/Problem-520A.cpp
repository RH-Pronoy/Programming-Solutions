// Problem Link: https://codeforces.com/problemset/problem/520/A
// Problem Name: A. Pangram
//Rafsan Hasan Pronoy

#include <iostream>
#include <set>
#include <cctype>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> alpha;

    for (char c : s) {
        alpha.insert(tolower(c));
    }

    if (alpha.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
