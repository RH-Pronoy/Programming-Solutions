// Problem Link: https://codeforces.com/contest/282/problem/A
// Problem Name: A. Bit++
//Rafsan Hasan Pronoy


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cin >> a;
    string str;
    int sum = 0;
    for(int i=0;i<a;i++){
        cin >> str;
        if(str[0] == '+' || str[2] == '+'){
            sum = sum+1;
        }
        else{
            sum = sum-1;
        }
        
    }
    cout << sum << endl;

    return 0;
}
