// Problem Link: https://codeforces.com/contest/96/problem/A
// Problem Name: A. Football
//Rafsan Hasan Pronoy


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int c0 = 0, c1 = 0;
    bool consecutive = false; 

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '0') {
            c0++;
            c1 = 0; 
        }
        else if (str[i] == '1') {
            c1++;
            c0 = 0; 
        } 
        else {
            c0 = 0; 
            c1 = 0;
        }

        
        if (c0 >= 7 || c1 >= 7) {
            consecutive = true;
            break;
        }
    }

    if (consecutive) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}

