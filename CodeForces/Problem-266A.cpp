// Problem Link: https://codeforces.com/contest/266/problem/A
// Problem Name: A. Stones on the Table
//Rafsan Hasan Pronoy

#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
cin>> n;

    string s;
    cin>> s;
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i] == s[i+1] ){
            c++;
        }
    }
    cout<<c<<endl;



    return 0;
}
