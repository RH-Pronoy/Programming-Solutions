// Problem Link: https://codeforces.com/contest/546/problem/A
// Problem Name: A. Soldier and Bananas
//Rafsan Hasan Pronoy

#include <iostream>

int main() {
    int a,b,c,i,sum=0;
    std::cin>>a>>b>>c;
    for(i=1;i<=c;i++){
        sum = sum + a*i;
    }
    if(sum>=b){
    std::cout << sum-b <<std::endl;
    }
    else{
       std::cout << 0 <<std::endl; 
    }
    return 0;
}