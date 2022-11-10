#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main() {

        system("clear");
        
        int disx, disy;
        
        struct plano {
            int x ;
            int y ;
        }ponto;
        
        printf("insira as coordenadas x e y:");
        scanf("%d", &ponto.x);
        scanf("%d", &ponto.y);

        disx = sqrt((ponto.x - 0)*(ponto.x - 0));

        disy = sqrt((ponto.y - 0)*(ponto.y - 0));

        printf("A distancia das coordenadas ate a origem é (%i, %i)", disx, disy);

        return 0;  
    }