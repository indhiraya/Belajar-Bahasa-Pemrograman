#include <iostream>
using namespace std;

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};
    int harga_bebek;
    for (int i = 0; i < 4; i++) {
        
        if (jantan[i] < 10 && jantan[i] > 0) {
            harga_bebek = 100000;
        } else if (jantan[i]>=10 && jantan[i]<=50) {
            harga_bebek = 75000;
        } else {
            harga_bebek = 50000;
        }
        int biaya_jantan = jantan[i]*harga_bebek;

        if (betina[i] <10 && betina[i] > 0) {
            harga_bebek = 100000;
        } else if (betina[i]>=10 && betina[i]<=50 ) {
            harga_bebek = 75000;
        } else {
            harga_bebek = 50000;
        }
        int biaya_betina = betina[i]*harga_bebek;

        cout << biaya_jantan + biaya_betina << endl;
    }
}
