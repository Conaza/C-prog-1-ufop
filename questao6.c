#include <stdio.h>
#include <stdlib.h>

 int main (void){
                        system("clear");
 int a, b, c, d;

 printf("insira o valor 1:");
 scanf("%d", &a);
 printf("insira o valor 2:");
 scanf("%d", &b);

    c = a - a + b;
    d = b - b + a;

printf("invertidos\n1-%d\n2-%d\nIniciais\n1-%d\n2-%d\n", c, d, a, b);

    return 0;
 }