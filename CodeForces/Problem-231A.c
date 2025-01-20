// Problem Link: https://codeforces.com/contest/231/problem/A
// Problem Name: A. Team
//Rafsan Hasan Pronoy

#include<stdio.h>
int main(){

int n,a,b,c,i;
scanf("%d",&n);
int count = 0;
for(i=0; i<n; i++){
  scanf("%d%d%d",&a,&b,&c);
    if((a == 1 && b==1 && c == 0)||(a == 1 && c==1 && b == 0)||(a == 0 && c == 1 && b==1)||(a == 1 && b == 1 && c == 1)){
        count++;
    }
}
printf("%d\n",count);

return 0;
}
