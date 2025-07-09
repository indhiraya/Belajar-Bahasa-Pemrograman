#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    long long hasilt=0, hasilk = 1;
    if(op == '+'){
        for(int i=0; i<data.size(); i++){
            hasilt += stoll(data[i]);
        }
        return to_string(hasilt);
    }else if(op == '*'){
        for(int i=0; i<data.size(); i++){
            hasilk *= stoll(data[i]);
        }
        return to_string(hasilk);
    }else{
        return "KESALAHAN";
    }
}

int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
