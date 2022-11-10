#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main (){
        int t, n = 1;
        printf("insira a quantidade de alunos\n");
        scanf("%i", &t);

        struct dados{
        char nome[150];
        char gen[2];
        int idade;
        int matricula;
        float notas[3];
        float media;
        int resultado;
        } aluno[t];

        for(int i = 0; i < t;i++){
        printf("insira seu nome\n");
        scanf("%s", aluno[i].nome);
        printf("insira seu genero\n");
        scanf("%s", aluno[i].gen);
        printf("insira a idade\n");
        scanf("%i", &aluno[i].idade);
        printf("insira sua matricula\n");
        scanf("%i", &aluno[i].matricula);
        printf("insira suas notas\n");
        for(int j = 0; j < 3;j++){
            scanf("%f", &aluno[i].notas[j]);
        }

        aluno[i].media = (aluno[i].notas[0] + aluno[i].notas[1] + aluno[i].notas[2]) / 3; 


        }

        for(int i = 0; i < t;i++){
                    if (aluno[i].media > 6){
            aluno[i].resultado = 1;
        } else if (aluno[i].media < 7){
            aluno[i].resultado = 0;
        }
            printf("nome: %s\n", aluno[i].nome);
            printf("gen:%s\n", aluno[i].gen);
            printf("idade:%i\n", aluno[i].idade);
            printf("matricula:%i\n", aluno[i].matricula);
            for(int j = 0; j < 3;j++){

            printf("%i° nota %f\n", n, aluno[i].notas[j]);
            n++;
        }
            printf("media: %f\n", aluno[i].media);
            printf("resultado:%i\n", aluno[i].resultado);
        }
    
    
    }