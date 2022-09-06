#include <stdio.h>
#include <stdlib.h>

    void main (){

        system ("clear");

    int notas = 0, contador = 0, soma = 0, somasala = 0, pessoas;
    float media, mediasala; 
    
    printf("insira a quantidade de alunos: ");
    scanf("%d", &pessoas);

    while (contador < pessoas){
    
    for (int i = 0; i <= 3; i++){
        printf("coloque sua nota em 10:");
        scanf("%d", &notas);
        
    soma = soma + notas;
    }
    
    media = soma / 4;
    printf("%f", media);
    if (media < 6) {
        printf("\nreprovado\n");

    } else

    printf ("\naprovado\n");
    contador++;
    somasala = somasala + media;
    media = 0;
    soma = 0;
    }  
    
    mediasala = somasala / contador;
   
        printf("\na media da sala e %f \n", mediasala);
     
    }