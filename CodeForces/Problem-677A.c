// Problem Link: https://codeforces.com/contest/677/problem/A
// Problem Name: A. Vanya and Fence
//Rafsan Hasan Pronoy

#include <stdio.h>

int main() {
    int n,h,arr[1001];
    scanf("%d%d",&n,&h);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c1=0,c2=0,sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        if(arr[i]>h){
            c2++;
        }
        else{
            c1++;
        }
    }
    for(int i=0;i<c1;i++){
        sum1 = sum1+1;
    }
     for(int i=0;i<c2;i++){
        sum2 = sum2+2;
    }
    
    printf("%d\n",sum1+sum2);

    return 0;
}