#include <stdio.h>
#include <stdlib.h>

    int procura(int vet[10], int numero, int i){

        if(vet[i] == numero){
            return i;
        }
        else if (i < 10) {
            return procura(vet, numero, i+1);
        }
        else if ( i == 9 && vet[i] != numero){
            return -1;
        }
    }

    int main() {
        system("clear");
        
        int vet[10], numero, indice, i;

        for(i = 0; i < 10;i++){
            vet[i] = i + 2;
        }

        printf("insira o numero a encontrar entre 2 e 11:\n");
        scanf("%i", &numero);

        indice = procura(vet, numero, 0);

        printf("o indice do numero e %d\n", indice);

        return 0;
    }

