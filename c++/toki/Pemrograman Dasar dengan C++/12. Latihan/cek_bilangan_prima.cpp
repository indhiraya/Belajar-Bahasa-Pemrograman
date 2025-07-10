#include <iostream>
#include <cmath>
using namespace std;

bool prima(int n){
    if(n <= 1){
        return 0;
    }else{
        for(int i = 2; i < sqrt(n); i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
}

int main(){
    int q;
    cin >> q;
    int n[q];
    for(int i = 0; i < q; i++){
        cin >> n[i];
        if(prima(n[i])){
            cout << "YA" << endl;
        }
        else{
            cout << "BUKAN" << endl;
        }
    }
}
