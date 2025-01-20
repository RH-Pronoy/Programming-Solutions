// Problem Link: https://codeforces.com/contest/118/problem/A
// Problem Name: A. String Task
//Rafsan Hasan Pronoy


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    for(int i=0;i<str.length();i++){
        
        if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u' || str[i] == 'Y' || str[i] == 'y'){
        
        }
        else {
            cout<<".";
            if(str[i] >= 65 && str[i]  <=90){
                char ch =str[i] + 32;
                cout<< ch;
            }
            else{
                cout<< str[i];
            }
        }
        
    }
 cout<<endl;

    return 0;
}
