#include <stdio.h>
#include <stdlib.h>

    void main () {

        int t, v[99999], maior =0 , ind = 0, i, dif = 0;

        printf("insira a quantidade de números:");
        scanf("%i", &t);

        printf("insira os números:\n");    
        for(int i = 0; i < t; i++) {
            scanf("\n%i", &v[i]);
        }
        for( i = 0; i < t; i++){
            
            dif = v[i] - v[i + 1];
            
            if ( i == 0){
            maior = dif;
            }
            if (dif > maior){
            maior = dif;
            ind = i;
            }
        }

        printf("a maior diferença é %i entre os indíces %i e %i\n", maior, i, i +1);

    
    }