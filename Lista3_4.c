#include <stdio.h>
#include <stdlib.h>

    int t = 0, mum[99][99], num, mdois[99][99];

    void LerMatriz(){

        for(int l = 0;l < t;l++){
            for(int c = 0;c < t;c++){

            mum[l][c] = rand() % 10;
            }
        }

        printf("sua matriz inicial é\n");
        for(int l = 0;l < t;l++){
            for(int c = 0;c < t;c++){

            printf("%4.d", mum[l][c]);
            
            }
        printf("\n");
        }

    }

    void Calculo() {

        printf("insira o numero para multiplicar a matriz\n");
        scanf("%d", &num);

        for(int l = 0;l < t;l++){
            for(int c = 0;c < t;c++){

            mdois[l][c] = num * mum[l][c];
            }
        }

    }

    void Impressao(){

        printf("raiz multiplicada\n");
        for(int l = 0;l < t;l++){
            for(int c = 0;c < t;c++){

            printf("%4.d", mdois[l][c]);
            }
        printf("\n");
        }
    }

    int main() {

        system("clear");

        printf("insira o tamanho da Matriz\n");
        scanf("%d", &t);

        LerMatriz();
        Calculo();
        Impressao();

        return 0;
    }