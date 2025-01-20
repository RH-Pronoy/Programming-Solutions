// Problem Link: https://codeforces.com/contest/617/problem/A
// Problem Name: A. Elephant
//Rafsan Hasan Pronoy

#include <iostream>

int main() {
    int a;
    std::cin>>a;
    
    if(a%5==0){
    std::cout << a/5 <<std::endl;
    }
    else{
       std::cout << (a/5)+1 <<std::endl; 
    }
    return 0;
}