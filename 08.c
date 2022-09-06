#include <stdio.h>
#include <stdlib.h>

    void main (){

        system("clear");

    float saldo = -1, deposito, saque, fim;
    int decisao;

    for (int i = 0; saldo < 0; i++){
    
    printf("insira seu saldo inicial em reais: ");
    scanf("%f", &saldo);
    if (saldo < 0) {
        printf("saldo inválido\n");
    }
    }
   
   for (int i = 0; decisao != 3; i++) {
    
    printf("\ndigite 1 para deposito\n");
    printf("digite 2 para saque\n");
    printf("digite 3 para finalizar\n");
    scanf("%d", &decisao);

    switch (decisao)
    {
    case 1: 
    printf("insira o valor do deposito: ");
    scanf("%f", &deposito);

     saldo = saldo + deposito;

    printf("seu novo saldo é %f", saldo); 
    break;
    case 2:
    printf("insira o valor do saque: ");
    scanf("%f", &saque);

     saldo = saldo - saque;

    printf("seu novo saldo é %f", saldo); 
    break;
    case 3:
    if (saldo == 0){
    printf("Saldo: %f \nConta zerada\n", saldo);
    }
    if (saldo > 0){
    printf("Saldo: %f \nConta operacional\n", saldo);
    }
    if (saldo < 0){
    printf("Saldo: %f \nConta negativada\n", saldo);
    }
     break;
    }
    }

    }