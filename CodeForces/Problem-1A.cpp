// Problem Link: https://codeforces.com/contest/1/problem/A
// Problem Name: A. Theatre Square
//Rafsan Hasan Pronoy


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long s = ceil((double)n / a) * ceil((double)m / a);

    cout << s << endl;

    return 0;
}
