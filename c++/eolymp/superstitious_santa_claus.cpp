#include <iostream>
using namespace std;

bool isHoliday(int year, int month) {
    int q = 13;
    if(month == 1 || month == 2){
        month += 12;
        year -= 1;
    }
    int k = year % 100;
    int j = year / 100;

    int h = (q + 13*(month + 1)/5 + k + k/4 + j/4 + 5*j) % 7;

    if(h == 6){
        return 1;
    }
    return 0;
}

int main() {
    int t = 0, k;
    cin >> k;
    int a[k], b[k];

    for(int i = 0; i < k; i++){
        cin >> a[i] >> b[i];
    }

    for(int i = 0; i < k; i++){
        for(int year = a[i]; year <= b[i]; year++){
            for(int month = 1; month <= 12; month++){
                if(isHoliday(year, month)){
                    t++;
                }
            }
        }
    }
    cout << t << endl;
    return 0;
}
