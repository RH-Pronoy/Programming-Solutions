// Problem Link: https://codeforces.com/problemset/problem/344/A
// Problem Name: A. Magnets
//Rafsan Hasan Pronoy

#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string strings[n];
 
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }
 
    string concatenated_string;
    for (int i = 0; i < n; ++i) {
        concatenated_string += strings[i];
    }
    int c=0;
    for (int i = 0; i < concatenated_string.length(); ++i) {
     if(concatenated_string[i] == concatenated_string[i+1]){
         c++;
     }
    }
 
    cout << c+1 << endl;
 
    return 0;
}
