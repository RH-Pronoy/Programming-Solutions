// Problem Link: https://codeforces.com/problemset/problem/479/A
// Problem Name: A. Expression
//Rafsan Hasan Pronoy

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int array[6];
    int n = sizeof(array) / sizeof(array[0]);
    int a,b,c;
    cin >> a >> b >> c;
    int one = (a + b) * c;
    array[0] = one;
    int two = a * (b + c);
    array[1] = two;
    int three = a * b * c;
    array[2] = three;
    int four = a + (b *c);
    array[3] = four;
    int five = (a * b) + c;
    array[4] = five;
    int six = a + b + c;
    array[5] = six;
    sort(array , array + n , greater<int>());
    cout << array[0] << endl;
    return 0;
}

