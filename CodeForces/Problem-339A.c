// Problem Link: https://codeforces.com/contest/339/problem/A
// Problem Name: A. Helpful Maths
//Rafsan Hasan Pronoy

#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int count[4] = {0}; 
    int len = strlen(s);


    for (int i = 0; i < len; i++) {
        if (s[i] == '1') {
            count[1]++;
        } else if (s[i] == '2') {
            count[2]++;
        } else if (s[i] == '3') {
            count[3]++;
        }
    }


    int printed = 0;
    for (int i = 1; i <= 3; i++) {
        while (count[i] > 0) {
            if (printed > 0) {
                printf("+");
            }
            printf("%d", i);
            count[i]--;
            printed++;
        }
    }

    printf("\n");

    return 0;
}
