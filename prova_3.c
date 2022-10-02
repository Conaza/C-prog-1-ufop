#include <stdio.h>
#include <stdlib.h>

    void main(){
        int n = 0, i = 0, j = 0;
        float  matriz[999][999], media, k, somak, somad, mediak;

        printf("defina o tamanho da matriz quadrada:");
        scanf("%i", &n);

        printf("insira a matriz:");
        for(int l = 0; l < n;l++){
            for(int c = 0;c < n;c++){
                scanf("%f",&matriz[l][c]);
            }
        }

        printf("insira um valor:");
        scanf("%f", &k);

        for(int l = 0; l < n;l++){
            for(int c = 0;c < n;c++){
                if(matriz[l][c] < k){
                i++;
                somak += matriz[l][c];
                }
            }
        }
        mediak = somak / i;
        printf("\nA media dos valores menores que k é:%f", mediak);

        for(int l = 0; l < n;l++){
            for(int c = 0;c < n;c++){
                if(l == c){
                j++;
                somad += matriz[l][c];
                }
            }
        }
        media = somad / j;
        printf("\nA media dos valores da diagonal principal é:%f\n", media);
        for(int l = 0; l < n;l++){
            for(int c = 0;c < n;c++){
                if(matriz[l][c] == k){
                matriz[l][c] = media;
                
                }
            }
        }
        printf("a matriz resultante é: ");
        for(int l = 0; l < n;l++){
            for(int c = 0;c < n;c++){
              printf("%2.f\n", matriz[l][c]);
            }
        }


    }