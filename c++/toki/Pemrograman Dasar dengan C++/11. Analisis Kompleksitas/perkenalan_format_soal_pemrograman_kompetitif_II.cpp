#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[100];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    for(int i=1; i<=n; i++){
        long long sum = 0;
        for(int j=1; j<=n; j++){
            if(j!=i){
                sum = sum + a[j];
            }
        }
        cout << sum << endl;
    }
}
