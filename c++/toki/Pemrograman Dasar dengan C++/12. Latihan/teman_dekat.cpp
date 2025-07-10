#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int k = 1e9, b = 0, n, d, t;
    cin >> n >> d;
    int x[n], y[n];
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            t = pow(abs(x[j]-x[i]),d)+pow(abs(y[j]-y[i]),d);

            if(t > b){
                b = t;
            }

            if(t < k){
                k = t;
            }
        }
    }
    cout << k << " " << b;
    return 0;
}
