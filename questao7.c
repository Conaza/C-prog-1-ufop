#include <stdio.h>
#include <stdlib.h>

    int main (void) {
                        system("clear");
    float a, b;

    printf("insira a temperatura em celsius:");
    scanf("%f", &a);

    b = a * 1.8 + 32;

    printf("%f Fahreinheit\n", b);
        return 0;
    }