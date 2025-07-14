/*
For a natural number let's define the degree of symmetry as an amount of pairs of its decimal digits, whose digits are equal and stand symmetrically with respect to the center of the number's decimal notation. If some digit stands in the center of the decimal notation, then it must be accepted too, as in pair with itself. Find the degree of symmetry of a given number n.

Input
The natural number n (n < 2 ·10^9).

Output
Print the degree of symmetry of n.

Examples
Input #1
123322
Answer #1
2
*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int t = 0,n;
    cin >> n;
    string s = to_string(n);
    if(s.length() % 2 == 0){
        for(int i=0; i<s.size()/2; i++){
            if(s[i] == s[s.size()-1-i]){
                t++;
            }
        }
    }else{
        for(int i=0; i<(s.size()/2)+1; i++){
            if(s[i] == s[s.size()-1-i] || i == (s.size()/2)+1){
                t++;
            }
        }
    }
    cout << t;
}
