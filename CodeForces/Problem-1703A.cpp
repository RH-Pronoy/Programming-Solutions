// Problem Link: https://codeforces.com/problemset/problem/1703/A
// Problem Name: A. YES or YES?
//Rafsan Hasan Pronoy

#include <iostream>
#include <cctype>
using namespace std;

bool check(string s) {
    if (s.length() != 3) 
    return false;
    
    return (tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's');
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (check(s)) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
