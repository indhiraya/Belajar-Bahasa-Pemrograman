#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n <= 1){
        return 0;
    }
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            return 0;
            break;
        }
    }
    return 1;
}

int main() {
    int p, n;
    cin >> p >> n;
    int t = p-2;
    int j = 0;
    for(int i=0; i<t; i++){
        n++;
        if(!isprime(n)){
            j++;
        }else{
            cout << j << endl;
            break;
        }
    }
    if(j == t){
        cout << "-1" << endl;
    }
}
