// Problem Link: https://codeforces.com/problemset/problem/69/A
// Problem Name: A. Young Physicist
//Rafsan Hasan Pronoy

#include <stdio.h>
 
int main() {
    int n;
    scanf("%d",&n);
    
    int x[n],y[n],z[n];
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++){
       scanf("%d%d%d",&x[i],&y[i],&z[i]); 
    }
    for(int i=0;i<n;i++){
        a = a + x[i];
        b = b + y[i];
        c = c + z[i];
    }
if(a==0 && b==0 && c==0){
    printf("YES\n");
}
else{
   printf("NO\n"); 
}
 
    return 0;
}