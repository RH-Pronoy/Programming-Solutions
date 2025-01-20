// Problem Link: https://codeforces.com/contest/4/problem/C
// Problem Name: C. Registration system
//Rafsan Hasan Pronoy


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

string s;

map<string, int> str;

while(t--){
cin>>s;

if (str[s]==0){
str[s]=1;
cout<<"OK"<<endl;
}

else{
cout<<s<<str[s]<<endl;
str[s]++;
}

}

return 0;
}