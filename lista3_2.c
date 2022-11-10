#include <stdio.h>
#include <stdlib.h>
    
    int soma(int numero){
    int somat, um = 1;
    
    if (numero == 2) {
        somat = 3;
    } else {
    somat = numero + soma(numero - 1);
    }
     
    return somat;

    }

    int main () {
        system("clear");

    int numero, somat;

    printf("insira um numero inteiro\n");
    scanf("%d", &numero);

    somat = soma(numero);

    printf("A soma é %d\n", somat);

    return 0;

    }
