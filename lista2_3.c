#include <stdio.h>
#include <stdlib.h>

    void main () {

        int vetor[10];

        for (int i = 0; i < 10; i++)
        {
            vetor[i] = rand() % 11 + 10;
            printf("%i \n", vetor[i]);
        }
        


    }