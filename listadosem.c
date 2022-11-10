#include <stdio.h>
#include <stdlib.h>

 int main(){
     
     int vetor[10], q;
     int *finalvetor;
     int i = 1;
     int *vet;
     vet = vetor;
     
     printf("Quantas publicações houveram hoje?");
     scanf("%i", &q);
     
     finalvetor = vetor + q;
     

     for(vet = vetor; vet < finalvetor;++vet){
     printf("\ninsira a quantidade de curtidas da publicaçao %i: ", i) ;  
     scanf("%i", &*vet);
     i++;
     
     }
    
    i = 1;

    printf("-------Relatorio-------\n");
     for(vet = vetor; vet < finalvetor;++vet){
         printf("A %i° publicaçao teve %i curtidas.\n", i, *vet);
         i++;
     }
     
     return 0;
     
     
 }