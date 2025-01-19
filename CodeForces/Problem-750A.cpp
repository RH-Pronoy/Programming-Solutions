// Problem Link: https://codeforces.com/problemset/problem/750/A
// Problem Name: A. New Year and Hurry
//Rafsan Hasan Pronoy

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int r = 240 - b;
    int count = 0;
    int t;

    for (int i = 1; i <= a; ++i) {
        t = i * 5;
        if (r >= t) {
            r -= t;
            count++;
        } else {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
