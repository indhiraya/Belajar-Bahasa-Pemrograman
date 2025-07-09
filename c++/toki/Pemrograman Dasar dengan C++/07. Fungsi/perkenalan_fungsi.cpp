#include <iostream>
using namespace std;

int biaya(int duck) {
    int price;
    if( duck < 10 && duck != 0){
        price = duck*100000;
    }else if(duck >= 10 && duck <= 50){
        price = duck*75000;
    }else{
        price = duck*50000;
    }
    return price;
}

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        int biaya_jantan = biaya(jantan[i]);
        int biaya_betina = biaya(betina[i]);

        cout << biaya_jantan + biaya_betina << endl;
    }
}
