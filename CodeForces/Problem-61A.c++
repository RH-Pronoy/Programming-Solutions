// Problem Link: https://codeforces.com/problemset/problem/61/A
// Problem Name: A. Ultra-Fast Mathematician
//Rafsan Hasan Pronoy

#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string num1, num2;
    cin >> num1 >> num2;
 
    int n = num1.length(); 
    string r;
 
    for (int i = 0; i < n; i++) {
        if (num1[i] != num2[i]) {
            r += '1';
        } else {
            r += '0';
        }
    }
 
    cout << r << endl;
 
    return 0;
}

