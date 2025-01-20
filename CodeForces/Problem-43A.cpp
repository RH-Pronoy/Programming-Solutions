// Problem Link: https://codeforces.com/contest/43/problem/A
// Problem Name: A. Football
//Rafsan Hasan Pronoy


#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string A,B;
    int X = 0, Y = 0;

    for (int i = 0; i < n; i++) {
        std::string S;
        std::cin >> S;

        if (i == 0) {
            A = S;
            X++;
        }
        else {
            if (S == A) {
                X++;
            }
            else {
                B = S;
                Y++;
            }
        }
    }

    if (X > Y) {
        std::cout << A << std::endl;
    } else {
        std::cout << B << std::endl;
    }

    return 0;
}
