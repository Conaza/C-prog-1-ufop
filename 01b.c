#include <stdio.h>
#include <stdlib.h>

void  main(){
int idade, soma =0 , contador =0; 
float media;

while ( idade >= 0 || contador <= 9999){
  printf("Digite a idade: ");
  scanf("%d", &idade);
  if (idade < 0){ 
    break;
  }
  soma = soma + idade;
  contador++;
}
media = soma / contador;
printf("A media das idades é: %f", media);
  
}