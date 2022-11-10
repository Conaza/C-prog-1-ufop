#include <stdio.h>
#include <stdlib.h>

    void eh_multiplo(int a, int b, int *resp, int *pv, int *fv, int vetor[]){
        for(pv = vetor; pv < fv ;++pv){
            printf("- %i", *pv);
            printf("\n");
            if (*pv % b == 0){
                printf("O numero e multiplo de %i\n", b);
                *resp + 1;
            } else *resp + 0;
            
        }

    }

    int main(){
        
        system("clear");

        int x, y, t =5;
        int *resp;
        int *vet;
        int vetor[5];
        vet = vetor;
        vet = (int *)malloc( 5 * sizeof(int));
        int *finalvetor;
        finalvetor = vetor + t;
        printf("insira o valor inteiro de x:");
        scanf("%i", &x);
        printf("insira o valor inteiro de y:");
        scanf("%i", &y);
        
        printf("insira 5 numeros inteiros\n");
        for(vet = vetor; vet < finalvetor ;++vet){
            scanf("%i", &*vet);
        }

           eh_multiplo(y, x, resp, vet, finalvetor, vetor);

        return 0;
    }