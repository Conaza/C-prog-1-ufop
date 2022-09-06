#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main (){
        system("clear");

float serie = 0, termo, fatorial;
int x, f;

printf("informe um valor x:\n");
scanf("%d",&x);

for ( int i = 0; i <= x; i++){

    termo = pow(x,i);
    fatorial = 1;
     for (f = 1; f <= 1; f++)
     { 
        fatorial *= f;
     }

    termo = termo/ fatorial;
    serie += termo;



}

printf("\n%f", serie);

    
}