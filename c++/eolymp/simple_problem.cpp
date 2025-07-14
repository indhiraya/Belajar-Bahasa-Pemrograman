/*
Write a program which reads a two-digit number and prints every digit, separated by a space.
Input
One integer from 10 to 99 inclusively.
Output
Print two digits separated by a space.
Examples
Input #1
24
Answer #1
2 4
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n >= 10 || n <= 99){
        int t = n%10;
        cout << n/10 << " " << t;
    }
}
