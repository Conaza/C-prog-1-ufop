#include <stdio.h>
#include <stdlib.h>

    void procedimento(int *pv, int t, int vetor[], int *maior, int *menor, int *s, float *m, int *fv) {
        int somamedia = 0;
         int contador = 0;

        for(pv = vetor; pv < fv;++pv){
      if (*pv % 2 != 0 ) {
        *maior = *pv;
    }
    if (*pv > *maior) {
        *maior = *pv;
    }

        }
    for(pv = vetor; pv < fv;++pv){
    if (*pv % 2 == 0) {
        *menor = *pv;
    }
    if (*pv < *menor) {
        *menor = *pv;
    }


    }
    for(pv = vetor; pv < fv;++pv){
        if(*pv < t){
        *s += *pv;
        }
    }
    for(pv = vetor; pv < fv;++pv){
        if(*pv % 5 == 0){
        somamedia = somamedia + *pv;
         contador++;
        }
    }
    *m = somamedia / contador;
    
    }




    int main () {

        int t = 0;
        int *vet;
        int pmaior;
        int pmenor;
        int soma;
        float media;
        int *finalvetor;
       
    

        printf("insira o tamanho do vetor(valor n):");
        scanf("%i", &t);

        int vetor[t];
        vet = vetor;
        finalvetor = vetor + t;

   
        printf("insira os valores do vetor\n");
        for(vet = vetor; vet < finalvetor;++vet){
            scanf("%i", vet);
            }
    
    
        procedimento(vet, t, vetor, &pmaior, &pmenor, &soma, &media, finalvetor);

        printf("O maior valor impar e %i\n", pmaior);
        printf("O menor valor par e %i\n", pmenor);
        printf("A soma dos numeros menores que n é %i\n", soma);
        printf("A media dos multiplos de 5 é %f\n", media);

        return 0;

    }