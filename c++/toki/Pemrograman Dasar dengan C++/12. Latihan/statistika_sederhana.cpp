#include <iostream>
using namespace std;

int main(){
    int n, m, c;
    cin >> n;
    int a[n];

    for(int x = 0; x<n; x++){
        cin >> a[x];
    }
    m = a[0];
    c = a[0];
    for(int x=0; x<n; x++){
        if(m<a[x]){
            m = a[x];
        }
        if(c>a[x]){
            c = a[x];
        }
    }

    cout << m << " " << c << endl;
    return 0;
}
