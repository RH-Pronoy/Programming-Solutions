// Problem Link: https://codeforces.com/problemset/problem/122/A
// Problem Name: A. Lucky Division
//Rafsan Hasan Pronoy

#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s = to_string(n);
    bool almostLucky = true;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '4' && s[i] != '7') {
            almostLucky = false;
            break;
        }
    }
    
    if(almostLucky || n % 4 == 0 || n % 7 == 0 || n % 47 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}