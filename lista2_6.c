#include <stdio.h>
#include <string.h>

    char str[999999];
    void strinv(char *str) {
        int temp, t;
        
        t = strlen(str);
        
        for (int i = 0; i < t/2; i++) {  
        temp = str[i];  
        str[i] = str[t - i - 1];  
        str[t - i - 1] = temp;
        }

    }

    void main () {
        printf("Insira a string para reversão:");
        scanf("%s", str);
        strinv(str);
        printf("string reversa: %s\n", str);
    }