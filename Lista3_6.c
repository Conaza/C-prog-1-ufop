#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main(){

        system("clear");

        int tam = 2, nb;

        printf("insira a quantidade de alunos\n");
        scanf("%d", &tam);

        double coeficiente[tam];

        struct aluno
        {
        char nome[20];
        char curso[30];
        int idade;
        double notas[3];
        }alunototal[tam];
        struct data
        { 
        int dia;
        int mes;
        int ano;
        }data[tam];

        for(int i = 0; i < tam;i++){
            nb = 1;
            printf("insira seu primeiro nome\n");
            scanf("%s", alunototal[i].nome);
            printf("insira seu curso em sigla\n");
            scanf("%s",alunototal[i].curso);
            printf("insira sua idade\n");
            scanf("%i", &alunototal[i].idade);
            printf("insira sua data de nascimento dia, mes e ano\n");
            scanf("%i", &data[i].dia);
            scanf("%i", &data[i].mes);
            scanf("%i", &data[i].ano);
            for(int j = 0; j < 3;j++) {
                printf("digite a %i° nota\n", nb);
                scanf("%lf", &alunototal[i].notas[j]);
                nb++;
            }

        }

        for(int i = 0; i < tam;i++){

        printf("Aluno: %s\n", alunototal[i].nome);
        printf("Curso: %s\n", alunototal[i].curso);
        printf("Idade: %i\n", alunototal[i].idade);
        printf("Data de nascimento: %i/%i/%i\n", data[i].dia, data[i].mes, data[i].ano);
        nb = 1;
        for(int j = 0; j < 3;j++){
            printf("%i° nota: %lf\n", nb, alunototal[i].notas[j]);
            nb++;
            }
        
        coeficiente[i] = ((alunototal[i].notas[0] * 2) + (alunototal[i].notas[1] * 3) + (alunototal[i].notas[2] * 4)) / 3;
        
        printf("Coeficiente: %lf\n", coeficiente[i]);

        
        }

    return 0;
        

    }