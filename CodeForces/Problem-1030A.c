// Problem Link: https://codeforces.com/problemset/problem/1030/A
// Problem Name: A. In Search of an Easy Problem
//Rafsan Hasan Pronoy

#include <stdio.h>
 
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]); 
    }
    int c=0;
    for(int i=0;i<n;i++){
       if(arr[i] == 1){
         c=1;  
       }
    }
    
    if(c==0){
    printf("EASY\n");
    }
    else{
        printf("HARD\n"); 
    }
    return 0;
}