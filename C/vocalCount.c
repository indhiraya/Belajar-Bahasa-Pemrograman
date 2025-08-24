#include <stdio.h>
#include <string.h>

int main(){
    char c[100];
    fgets(c, sizeof(c), stdin);
    int a=0, i=0, u=0, e=0, o=0;
    for(int i=0; i<strlen(c); i++){
        if(c[i]=='a' || c[i]=='A') a++;
        else if(c[i]=='e' || c[i]=='E') e++;
        else if(c[i]=='i' || c[i]=='I') i++;
        else if(c[i]=='o' || c[i]=='O') o++;
        else if(c[i]=='u' || c[i]=='U') u++;
    }

    printf("A/a = %d\n", a);
    printf("I/i = %d\n", i);
    printf("U/u = %d\n", u);
    printf("E/e = %d\n", e);
    printf("O/o = %d\n", o);
    return 0;
}
