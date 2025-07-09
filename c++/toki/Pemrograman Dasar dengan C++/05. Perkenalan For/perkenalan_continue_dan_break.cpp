#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int luas = 100000; luas <= 200000; luas++) {
        if (luas%2 != 0) {
            continue;
        }
        bool kuadrat_sempurna = false;
        int akar = sqrt(luas);
        if(akar*akar == luas){
            kuadrat_sempurna = true;
        }
        if (kuadrat_sempurna) {
            cout << luas;
            break;
        }
    }
}
