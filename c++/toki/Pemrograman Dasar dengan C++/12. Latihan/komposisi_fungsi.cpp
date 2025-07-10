#include <iostream>
using namespace std;

int fungsi_f(int a, int b, int k, int x){
    
    if(k == 0){
        return x;
    }else{
        int c = abs(a*x+b);
        return fungsi_f(a, b, k-1, c);
    }
}

int main(){
    int a, b, k, x;
    cin >> a >> b >> k >> x;
    cout << fungsi_f(a, b, k, x);
}
