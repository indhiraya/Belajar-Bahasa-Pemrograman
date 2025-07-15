#include <iostream>
using namespace std;

int fpb(int a, int b){
    while(b != 0){
        int sisa = a % b;
        a = b;
        b = sisa;
    }
    return a;
}

int kpk(int a, int b){
    return (a * b) / fpb(a, b);
}

int main(){
    int c = 0,s, k, m, n, d, t;
    cin >> k >> m >> n >> d;
    s = kpk(kpk(k, m), n);

    for(int i = s; i<= 10000000; i+=s){
        t = i/k+i/m+i/n;
        if((i-t) == d){
            cout << i << endl;
            c++;
            break;
        }
    }

    if(c == 0){
            cout << "-1" << endl;
    }
}
