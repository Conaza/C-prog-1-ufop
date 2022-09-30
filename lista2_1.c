#include <stdio.h>
#include <stdlib.h>

int contaImpar(int n1, int n2)
{
    int impares = 0;

    if(n1> n2)
    {
        for (int i = n2;i <= n1; ++i) {
            if(i % 2 != 0)
                impares++;
        }
    }
    if (n2 > n1)
    {
        for (int i = n1;i <= n2; ++i) {
            if(i % 2 != 0)
                impares++;
        }
    }
    else
    {
        if(n1 % 2 != 0)
            impares++;
    }

    return impares;
}
void main() {

            system("clear");

    int n1, n2;
    printf("digite o primeiro número: ");
    scanf("%d", &n1);

    printf("digite o segundo número: ");
    scanf("%d", &n2);

    printf("quantidade de ímpares: %d \n", contaImpar(n1, n2));


}