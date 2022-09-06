#include <stdio.h>
#include <stdlib.h>

    void main () {
            system("clear");
        char a;
        int masc = 0, fem = 0, outros = 0;

         printf("use m para masculino, f para feminino e n para nao binario e outros\n");

    for (int i = 0; i <= 30; i++)
    {
        printf("insira seu genero: ");
        scanf(" %c", &a);

    if(a == 'm') {
        masc+= 1;
    } else if (a == 'f'){
        fem+= 1;
    } else 

    outros+= 1;
    
    
    }
        printf("\n %d masculinos\n", masc);
        printf("\n %d femininos\n", fem);
        printf("\n %d não binários e outros\n", outros);



    }