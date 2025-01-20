// Problem Link: https://codeforces.com/contest/41/problem/A
// Problem Name: A. Translation
//Rafsan Hasan Pronoy

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string s, t;
    cin >> s >> t;

    string r = s;
    reverse(r.begin(), r.end());

    if (r == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
