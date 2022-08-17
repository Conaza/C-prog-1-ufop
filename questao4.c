#include <stdio.h>
#include <stdlib.h>

    int main (void) {
                system ("clear");
    float a, b, c; 
    
    printf("insira o salario minimo atual:");
    scanf("%f", &a);

    printf("insira seu salario:");
    scanf("%f", &b);

    c = b / a;

    printf ("seu salario e equivalente a %f salarios minimos\n", c);
        return 0;
    }