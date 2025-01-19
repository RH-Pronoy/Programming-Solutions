// Problem Link: https://codeforces.com/problemset/problem/58/A
// Problem Name: A. Chat room
//Rafsan Hasan Pronoy

#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string h = "hello";
    int j = 0; 
 
    for (char c : s) {
        if (c == h[j]) {
            j++; 
            if (j == 5) {
                cout << "YES"<<endl; 
                return 0;
            }
        }
    }
 
    cout << "NO"<<endl; 
    return 0;
}