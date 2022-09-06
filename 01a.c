  #include<stdio.h>
  #include<stdlib.h>

  void main () {
    system ("clear");
    
    int idade, soma = 0 , contador = 0;
    float media;

for (int i = 0; i <= 30; i++)
{
    printf("insira aqui a idade: ");
    scanf("%d", &idade);

    if (idade < 0)
    {
        break;
    }
    
    contador++;
    soma = soma + idade;
   
    } 

  media = soma / contador ;

printf("a media dos numeros é %f", media);
printf("\n");

  }