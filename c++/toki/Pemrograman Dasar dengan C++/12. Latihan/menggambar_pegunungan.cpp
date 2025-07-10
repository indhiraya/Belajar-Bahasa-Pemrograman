#include <iostream>
using namespace std;

void mountain(int n){
    if(n == 1){
        cout << "*" << endl;
    }

    if(n>1){
        mountain(n-1);
        for(int i = 0; i < n; i++){
            cout << "*";
        }
        cout << endl;
        mountain(n-1);
    }
}
int main(){
    int n;
    cin >> n;
    mountain(n);
}
