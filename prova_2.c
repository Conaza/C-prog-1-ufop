#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int n = 0;
    char str[9999];

    int string(char *str){
        int count = 0;

        for(int i = 0; i < n;i++){
            if(str[i] == 'f'){
                str[i] = 'w';
            }
            else if(str[i] == 'j'){
                str[i] = 'k';
            }
            else if(str[i] == 'm'){
                str[i] = 'y';
            }
            if(str[i] == 'p'){
                count++;
            }
        }
            

        return count;

    }



    void main () {
        


        printf("\ninsira o tamanho da string:");
        scanf("%i", &n);

        

        printf("\ninsira o texto:");
        scanf("%s", str);

        string(str);

        printf("%s\n", str);
        printf("quantidade de p's:%i", string(str));

    }