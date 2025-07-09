#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        char h;
        char f = toupper(c);
        if(f == 'Z'){
            h = 'A';
        }else{
            h = char(int(f)+1);
        }
        cout << h;
    }
    cout << endl;
}
