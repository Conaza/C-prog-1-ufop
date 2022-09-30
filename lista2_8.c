#include <stdio.h>
#include <stdlib.h>

    void main () {

        int maior = 0, menor = 0, soma, matriz[5][5], somac[5], somal[5];

        for (int i = 0; i < 5; i++) {
            for(int c = 0; c < 5; c++){
            
            matriz[i][c] = rand() % 10;
            
            }

        }

        for(int i = 0; i < 5;i++ ){
            soma = 0;
            for(int c = 0; c < 5;c++){
                soma += matriz[i][c];
            }
                somal[i] = soma;
                if ( i == 0){
                menor = somal[i];
                }
                if( somal[i] < menor) {
                menor = i;
                }
        }

        for(int c = 0; c < 5;c++ ){
            soma = 0;
            for(int i = 0; i < 5;i++){
                soma += matriz[i][c];
            }
                somac[c] = soma;

                if ( c == 0){
                maior = somac[c];
                }
                if( somac[c] > maior) {
                maior = c;
                }
        }


        printf("A linha com menor soma é a %i \nA coluna com maior soma é a %i\n", menor, maior);
    }