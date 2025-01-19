// Problem Link: https://codeforces.com/problemset/problem/579/A
// Problem Name: A. Raising Bacteria
//Rafsan Hasan Pronoy

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    int count = 0;
    while (x > 0) {
        if (x % 2 == 1) {
            count++;
        }
        x= x/ 2;
    }
    
    cout << count << endl;
    return 0;
}

