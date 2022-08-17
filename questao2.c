#include <stdio.h>
#include <stdlib.h>

    int main (void) {
                        system("clear");
    int a, b, c, d, e;
    float f;

    printf("digite o primeiro numero:");
    scanf("%d", &a);
    printf("digite o segundo numero:");
    scanf("%d", &b);

    c = a + b;
    d = a - b;
    e = a * b;
    f = (float)a / (float)b;

    printf("%d + %d = %d\n", a, b, c);
    printf("%d - %d = %d\n", a, b, d);
    printf("%d * %d = %d\n", a, b, e);
    printf("%d / %d = %f\n", a, b, f);
        return 0;
    }