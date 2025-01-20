// Problem Link: https://codeforces.com/contest/59/problem/A
// Problem Name: A. Word
//Rafsan Hasan Pronoy

#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str;
    std::cin >> str;

    int ucount = 0,lcount = 0;

   
    for (char c : str) {
        if (std::isupper(c)) {
            ucount++;
        } else {
            lcount++;
        }
    }

    
    if (ucount > lcount) {
       
        for (char& c : str) {
            c = std::toupper(c);
        }
    } else {
        
        for (char& c : str) {
            c = std::tolower(c);
        }
    }

    std::cout << str << std::endl;

    return 0;
}
