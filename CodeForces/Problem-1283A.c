// Problem Link: https://codeforces.com/contest/1283/problem/A
// Problem Name: A. Minutes Before the New Year
//Rafsan Hasan Pronoy

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    
    while(t--){
        
    int a,b;
    scanf("%d%d",&a,&b);
    int x= a*60 ;
     printf("%d\n", 1440 - (x+b));
}
    return 0;
}