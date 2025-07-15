#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n+1, n);
    a[1] = 1;

    for(int i=2; i<=n; i++){
        for(int j=1; j<i; j++){
            a[i] = min(a[i], a[j] + a[i-j]);
        }

        for(int j=2; j*j <= i; j++){
            if(i % j == 0){
                a[i] = min(a[i], a[j] + a[i/j]);

                if(j != i/j){
                    a[i] = min(a[i], a[j] + a[i/j]);
                }
            }
        }
    }

    cout << a[n] << endl;
}
