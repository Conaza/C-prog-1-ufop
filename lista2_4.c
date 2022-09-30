#include <stdio.h>
#include <stdlib.h>

    void main() {

        int v1[10], v2[10], v3[10];

        for(int i = 0; i < 10; i++) {
            printf("insira o valor de v1:");
            scanf("%i", &v1[i]);
            printf("insira o valor de v2:");
            scanf("%i", &v2[i]);

            v3[i] = v1[i] * v2[i];
        }

        for(int i = 0; i < 10; i++) {
            printf("%i \n", v3[i]);
        }



    }