// Problem Link: https://codeforces.com/contest/1669/problem/A
// Problem Name: A. Division?
//Rafsan Hasan Pronoy

#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&n);
    while(n--){
    scanf("%d",&t);

    if(t<=1399){
    printf("Division 4");}
    else if(t>=1400 && t<=1599){
    printf("Division 3");}
    else if(t >= 1600 && t<= 1899){
    printf("Division 2");}
    else if(t>=1900){
    printf("Division 1");}

    printf("\n");}
    return 0;
}
