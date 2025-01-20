// Problem Link: https://codeforces.com/contest/1669/problem/C
// Problem Name: C. Odd/Even Increments
//Rafsan Hasan Pronoy

#include <stdio.h>

int case2(int a[],int n){
    for(int i=0;i<=n;i=i+2){
        a[i] = a[i]+1;
    }
    int even = 0;
    int odd = 0;

    for(int i = 0 ;i<n; i++){

        if(a[i]%2 == 0){
        even++;
        }
        else{
        odd++;
        }

    }

    if(even == n || odd == n){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


}

int case1(int a[],int n){
    for(int i=1;i<=n;i=i+2){
        a[i] = a[i]+1;
    }
    int even = 0;
    int odd = 0;

    for(int i = 0 ;i<n; i++){

        if(a[i]%2 == 0){
        even++;
        }
        else{
        odd++;
        }

    }

    if(even == n || odd == n){
        printf("YES\n");
    }
    else{
            case2(a,n);
        //printf("NO\n");
    }


}

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i = 0; i<n; i++){
       scanf("%d",&a[i]);
    }
    case1(a,n);

     }

    return 0;
}
