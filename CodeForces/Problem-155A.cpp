// Problem Link: https://codeforces.com/problemset/problem/155/A
// Problem Name: A. I_love_%username%
//Rafsan Hasan Pronoy

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int count = 0;
    int max = a[0];
    int min = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] > max) {
            max = a[i];
            count++;
        } 
        else if (a[i] < min) {
            min = a[i];
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

