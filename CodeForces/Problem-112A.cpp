// Problem Link: https://codeforces.com/contest/112/problem/A
// Problem Name: A. Petya and Strings
//Rafsan Hasan Pronoy

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    std::string s1,s2;
    std::getline(std::cin, s1);  
    std::getline(std::cin, s2); 
    
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
   
    if((s1.compare(s2)) < 0)
        cout << "-1" << endl;
    else if((s1.compare(s2)) == 0)
        cout << "0" << endl;
    else
        cout << "1" << endl;

    return 0;
}