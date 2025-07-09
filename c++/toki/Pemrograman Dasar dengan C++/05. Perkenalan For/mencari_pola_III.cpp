#include <iostream>
using namespace std;

int main() {
    int N = 10;
    for (int i = 1; i <= N; i++) {
        int count = 1;
        int part = N/2;
        int red = 0;
        for(int j=1; j<=N; j++){
            if(N%2==0){
                if(count <= part){
                    if(i==j || j == N-i+1){
                        cout << "*";
                    }else{
                        cout << ".";
                    }
                }else{
                    if(j==count || j == part - red){
                        cout << "*";
                    }else{
                        cout << ".";
                    }
                }
            }else{ 
                if(count <= part){
                    if(i==j || j == N-i+1){
                        cout << "*";
                    }else{
                        cout << ".";
                    }
                }else if(count == part){
                    if(j == part+1){
                        cout << "*";
                    }else{
                        cout << ".";
                    }
                }else{
                    if(j == part-1 || j== part+1){
                        cout << "*";
                    }else{
                        cout << ".";
                    }
                }
            }
        }
        count++;
        if(N%2 == 0){
            if(count >= part){
                red++;
            }
        }else{
            if(count >= part+1){
                red++;
            }
        }
        cout << endl;
    }
}
