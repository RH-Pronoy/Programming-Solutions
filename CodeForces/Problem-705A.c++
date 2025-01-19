// Problem Link: https://codeforces.com/problemset/problem/705/A
// Problem Name: A. Hulk
//Rafsan Hasan Pronoy

#include <iostream>
#include <string.h>

using namespace std;
int main() {
    int n;
  cin >> n;
  string s;
 
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            s += "I hate";
        } 
        else {
            s += "I love";
        }
        if (i != n) {
            s += " that ";
        }
        else {
            s += " it";
        }
    }
 
cout << s << endl;
    return 0;
}