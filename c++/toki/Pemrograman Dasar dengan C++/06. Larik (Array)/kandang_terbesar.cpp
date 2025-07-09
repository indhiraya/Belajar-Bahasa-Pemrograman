#include <iostream>
using namespace std;

int main() {
    int luas[5];

    luas[0] = 225 * 335;
    luas[1] = 215 * 394;
    luas[2] = 198 * 400;
    luas[3] = 314 * 298;
    luas[4] = 299 * 278;
    int largest = luas[0];

    for (int i = 1; i < 5; i++) {
        if (largest < luas[i]) {
            largest = luas[i];
        }
    }
    cout << largest << endl;
}
