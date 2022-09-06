#include <stdio.h>
#include <stdlib.h>

    int main (void) {
                        system("clear");
    float a, b;

    printf("insira a temperatura em fahrenheit:");
    scanf("%f", &a);

    b = a - 32;
    b / 1.8;

    printf("%f Celsius\n", b);
        return 0;
    }