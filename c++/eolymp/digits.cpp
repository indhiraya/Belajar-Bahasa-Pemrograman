/*
Find the number of digits in a nonnegative integer n.

Input
One nonnegative integer n(0≤n≤2⋅10^9).
Output
Print the number of digits in number n.

Examples
Input #1
12343
Answer #1
5
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n >=0 ){
        int a = to_string(n).length();
        cout << a;
    }
}
