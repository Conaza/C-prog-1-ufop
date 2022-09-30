#include <stdio.h>
#include <stdlib.h>

    void main () {

        int matriz[3][6], va, matrizd[3][6];

        for(int l = 0; l < 3;l++){
            for(int c = 0; c < 6;c++){
                matriz[l][c] = rand()% 100;
            }
        }
        printf("matriz inicial: \n");
        for(int l = 0; l < 3;l++){
            for(int c = 0; c < 6;c++){
              printf("%6.i", matriz[l][c]);
            }
        }
       
        printf("\ninsira um valor para multiplicação:");
        scanf("%i", &va);

        for(int l = 0; l < 3;l++){
            for(int c = 0; c < 6;c++){
            matrizd[l][c] =  matriz[l][c] * va;
            }
        }
        printf("matriz multiplicada: \n");
        for(int l = 0; l < 3;l++){
            for(int c = 0; c < 6;c++){
            printf("%6.i", matrizd[l][c]);
            }
        }


    }