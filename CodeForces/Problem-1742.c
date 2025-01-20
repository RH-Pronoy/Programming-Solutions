// Problem Link: https://codeforces.com/contest/1742/problem/A
// Problem Name: A. Sum
//Rafsan Hasan Pronoy


#include <stdio.h>

int main() {
    int a,b,c;
    int t;
     scanf("%d",&t);
     while(t--){
    scanf("%d%d%d",&a,&b,&c);
    if(a == b+c || b == a+c || c == a+b){
    printf("YES\n");
    }
    else{
     printf("NO\n");   
    }
}
    return 0;
}