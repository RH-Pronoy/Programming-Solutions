// Problem Link: https://codeforces.com/contest/734/problem/A
// Problem Name: A. Anton and Danik
//Rafsan Hasan Pronoy

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int x,i,a=0,d=0;
    string s;
    std::cin>>x;
    std::cin>>s;
    for(i=0;i<x;i++){
        if(s[i] == 'A'){
            a++;
        }
        else if(s[i] == 'D'){
            d++;
        }
    }
    if(a>d){
         std::cout << "Anton" <<std::endl;
    }
    else if(d>a){
        std::cout << "Danik" <<std::endl;
    }
   else{
       std::cout << "Friendship" <<std::endl;
   }
    return 0;
}