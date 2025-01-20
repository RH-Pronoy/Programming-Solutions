// Problem Link: https://codeforces.com/contest/791/problem/A
// Problem Name: A. Bear and Big Brother
//Rafsan Hasan Pronoy

#include<stdio.h>
int main()
{
    int a,b,y=0;
    scanf("%d%d",&a,&b);

    while(1){
        y++;
        a= 3*a;
        b = 2*b;

        if(a>b)
            break;
    }

    printf("%d",y);

    return 0;
}

