// Problem Link: https://codeforces.com/contest/110/problem/A
// Problem Name: A. Nearly Lucky Number
//Rafsan Hasan Pronoy

#include <bits/stdc++.h>
using namespace std;

int main() {
long long int n;
cin>> n;

    string s = to_string(n);
    int x = s.length();
    int c=0;
    for(int i=0;i<x;i++){
        if(s[i] == '4' || s[i] == '7'){
            c++;
        }
    }
    if(c == 4 || c == 7){
          cout<<"YES"<<endl;
        }
        else{
              cout<<"NO"<<endl;
        }



    return 0;
}
