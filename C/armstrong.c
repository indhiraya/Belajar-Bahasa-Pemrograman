#include <stdio.h>

int count(int r, int n, int d){
    if(n != 0){
        int a = 1;
        for(int i=0; i<d; i++){
            a *= n%10;
        }
        r += a;
        return count(r, n/10, d);
    }else{
        return r;
    }    
}

int main(){
    int a, r=0, d=0;
    scanf("%d", &a);

    int i = a;
    while(i != 0){
        i /= 10;
        d++;
    }

    if(count(r, a, d) == a){
        printf("Merupakan Bilangan Armstrong");
    }else{
        printf("Bukan Merupakan Bilangan Armstrong");
    }
    return 0;
}
