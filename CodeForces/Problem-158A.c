// Problem Link: https://codeforces.com/contest/158/problem/A
// Problem Name: A. Next Round
//Rafsan Hasan Pronoy

#include<stdio.h>
int main(){

int n,a,i;
scanf("%d%d",&n,&a);
int arr[n];
int count = 0;
for(i=0; i<n; i++){
  scanf("%d",&arr[i]);
}
int x = arr[a-1];
for(i=0 ; i<n; i++){
    if(arr[i] >= x && arr[i]!=0){
        count++;
    }
}
printf("%d\n",count);

return 0;
}
