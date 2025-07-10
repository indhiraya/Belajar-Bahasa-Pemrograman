#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n, c, r;
    cin >> n;
    long long r_b = 1, c_b = n;

    for(r = 2; r <= sqrt(n); r++){
        if(n%r == 0){
            c = n/r;
            if((c - r) < (c_b - r_b)){
                c_b = c;
                r_b = r;
            }
        }
    }
    cout << r_b << " " << c_b << endl;
}
