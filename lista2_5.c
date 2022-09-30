#include <stdio.h>
#include <stdlib.h>

    int  t;
    float media[999999], v1[999999], v2[999999];

    void Pum() {
       
        printf("insira a quantidade de alunos:");
        scanf("%i", &t);

        for(int i = 0; i < t; i++) {

            printf("nota 1:");
            scanf("%f", &v1[i]);

            printf("nota 2:");
            scanf("%f", &v2[i]);
        }
    }

    void Pdois () {

        for(int i = 0; i < t; i++) {
        
        media[i] = (v1[i] + v2[i]) / 2;
        
        }

        }

        void Ptres () {
            int aluno = 1;
        for (int i = 0; i < t; i++) {
            
            printf("aluno %i:\n", aluno);
            printf("nota 1: %.2f\n", v1[i]);
            printf("nota 2: %.2f\n", v2[i]);
            printf("media: %.2f\n", media[i]);

            aluno++;
        }

        }

    void main () {

        Pum();
        Pdois();
        Ptres();

    }