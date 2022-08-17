#include <stdio.h>
#include <stdlib.h>

 int main (void) {

    system ("clear");

    float a, b , c;

printf("insira o valor da conta:");
scanf("%f", &a);

    b = a / 100 * 10;
    c = a + b;

        printf("porcentagem do garçom:%f \nvalor total:%f\n", b, c);
    return 0;
 }