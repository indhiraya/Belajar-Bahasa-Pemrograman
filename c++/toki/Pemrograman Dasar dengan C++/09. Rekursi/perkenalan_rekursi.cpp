#include <iostream>
using namespace std;

int faktorial(int n) {
    int hasil = 1;
    if(n==1 || n==0){
        return hasil;
    }else{
        for(int i=2; i<=n; i++){
            hasil *= i;
        }
        return hasil;
    }
}

int main() {
    cout << faktorial(12) << endl;
}
//u can use this too
#include <iostream>
using namespace std;

int faktorial(int n) {
    if(n==1 || n==0){
        return 1;
    }
    
    return n*faktorial(n-1);
}

int main() {
    cout << faktorial(12) << endl;
}
