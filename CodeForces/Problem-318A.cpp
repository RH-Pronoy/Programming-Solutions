// Problem Link: https://codeforces.com/contest/318/problem/A
// Problem Name: A. Even Odds
//Rafsan Hasan Pronoy

#include <iostream>
using namespace std;

long long findNumber(long long n, long long k) {
    long long oddCount = (n + 1) / 2;
    long long evenCount = n / 2;

    if (k <= oddCount) {
        return 2 * k - 1;
    } else {
        return 2 * (k - oddCount);
    }
}

int main() {
    long long n, k;
    cin >> n >> k;

    cout << findNumber(n, k) << endl;

    return 0;
}
