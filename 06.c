#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main (){
        system("clear");

float serie = 0, termo, fatorial = 1;
int x, f, pot = 1;

printf("informe um valor x:\n");
scanf("%d",&x);

for ( int i = 0; i <= x; i++){
    pot = pot + 2;
    termo = pow(x,pot);
    fatorial = fatorial + 2;
     for (f = 1; f <= 1; f++)
     { 
        fatorial *= f;
     }

    termo = termo/ fatorial;
    serie = x - termo;



}

printf("\n%f", serie);

    
}