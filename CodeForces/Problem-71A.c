// Problem Link: https://codeforces.com/contest/71/problem/A
// Problem Name: A. Way Too Long Words
//Rafsan Hasan Pronoy

#include<stdio.h>
#include<string.h>
int main(void){
    int t,n;
    scanf("%d",&t);
    while(t--){
        char s[101];
        scanf("%s",s);
        n = strlen(s);
        char x,y;

            for(int i=0; i<n; i++){
               if(n>10){
                   x = s[i];
                   y = s[n-1];
                printf("%c%d%c\n",x,n-2,y);
                break;
                }
               else{
                  printf("%s\n",s);
                   break;
               }
        }
    }
   return 0;
}
