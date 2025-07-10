#include <iostream>
using namespace std;

int main(){
    int n, c, r;
    cin >> n;
    int r_b = 1, c_b = n;

    for(r = 2; r < n; r++){
        if(n%r == 0){
            c = n/r;
            if(r <= c && (c - r) < (c_b - r_b)){
                c_b = c;
                r_b = r;
            }
        }
    }
    cout << r_b << " " << c_b << endl;
}
