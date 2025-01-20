// Problem Link: https://codeforces.com/contest/281/problem/A
// Problem Name: A. Word Capitalization
//Rafsan Hasan Pronoy

#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string word;
    std::getline(std::cin, word);  

    if (!word.empty()) {  
        word[0] = std::toupper(word[0]);  
    }

    std::cout << word << std::endl;  

    return 0;
}
