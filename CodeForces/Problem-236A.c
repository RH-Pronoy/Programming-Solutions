// Problem Link: https://codeforces.com/contest/236/problem/A
// Problem Name: A. Boy or Girl
//Rafsan Hasan Pronoy

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    int i,j;
    for(i=0; i<l-1; i++)
    {
        for(j=i+1; j<l; j++)
        {
            if(s[i]>s[j])
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    int ans=0;
    for(i=1; i<l; i++)
    {
        if(s[i]!=s[i-1])
            ans++;
    }

    if(ans%2 !=0)
    printf("CHAT WITH HER!\n");

    else
    printf("IGNORE HIM!\n");

    return 0;
}

