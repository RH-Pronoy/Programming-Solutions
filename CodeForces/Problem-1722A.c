// Problem Link: https://codeforces.com/contest/1722/problem/A
// Problem Name: A. Spell Check
//Rafsan Hasan Pronoy

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    
    while(t--){
        
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    
    int T=0;
    int ii=0;
    int m=0;
    int u=0;
    int r=0;
    
    if(n != 5){
    printf("NO\n");
    }
    else{
        for(int i = 0; i<5 ; i++){
            if(s[i] == 'T'){
                T++;
            }
            else if(s[i] == 'i'){
                ii++;
            }
            else if(s[i] == 'm'){
                m++;
            }
            else if(s[i] == 'u'){
                u++;
            }
            else if(s[i] == 'r'){
                r++;
            }
        }
        if(T == 1 && ii == 1 && m == 1 && u == 1 && r==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
}
    return 0;
}