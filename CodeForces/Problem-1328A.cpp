// Problem Link: https://codeforces.com/problemset/problem/1328/A
// Problem Name: A. Divisibility Problem
//Rafsan Hasan Pronoy

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a % b == 0) {
            cout << 0 << endl;
        } else {
            cout << b - (a % b) << endl;
        }
    }
    return 0;
}
