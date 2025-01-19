// Problem Link: https://codeforces.com/problemset/problem/133/A
// Problem Name: A. HQ9+
//Rafsan Hasan Pronoy

#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H' ||s[i]=='Q' ||s[i]=='9'){
            count++;
        }
    }
    if(count==0){
        cout << "NO"<<endl;    
    }
    else{
      cout << "YES"<<endl;  
    }

    return 0;
}
