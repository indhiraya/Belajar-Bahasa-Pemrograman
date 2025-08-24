#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c[100];
    fgets(c, sizeof(c), stdin);
    for(int i = 0; i < strlen(c); i++){
        c[i] = tolower(c[i]);
        if(c[i] == '_'){
            c[i+1] = toupper(c[i+1]);
            for(int j=i; j<strlen(c); j++){
                c[j] = c[j+1];
            }
            break;
        }
    }

    printf("%s", c);
    return 0;
}
