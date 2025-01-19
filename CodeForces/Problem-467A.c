// Problem Link: https://codeforces.com/problemset/problem/467/A
// Problem Name: A. George and Accommodation
//Rafsan Hasan Pronoy

#include <stdio.h>
 
int main() {
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    
    for(int i=0;i<n;i++){
       scanf("%d %d",&a[i],&b[i]); 
    }
    int c=0;
    for(int i=0;i<n;i++){
       if(a[i]+2 <= b[i]){
         c++;  
       }
    }
    
    
    printf("%d\n",c);
  
 
    return 0;
}