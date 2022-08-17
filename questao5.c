#include <stdio.h>
#include <stdlib.h>

int main (void) {
                    system("clear");
    float a, b;

    printf("insira o valor atual:");
    scanf("%f", &a);

    b = a / 100 * 9 + a;

    printf("o novo valor é:%f\n", b);
    
    return 0;
}