// Problem Link: https://codeforces.com/problemset/problem/486/A
// Problem Name: A. Calculating Function
//Rafsan Hasan Pronoy

#include <bits/stdc++.h>
using namespace std;

int main() {
 long long int n;
cin>> n;

    long long int c=0;
     if (n % 2 == 0) {
        c= n / 2;
    }
    else {
        c= -(n + 1) / 2;
    }
cout<<c<<endl;


    return 0;
}
