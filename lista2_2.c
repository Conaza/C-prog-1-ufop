#include <stdio.h>
#include <stdlib.h>
    
    int dado(){
     
     int rn;
      
     rn = rand() % 6 + 1;

     return rn;

    }

    void main () {

            system("clear");
     
     int a = 0, d = 0, t = 0, q = 0, c = 0, s = 0, rn;
     float poru, pord, port, porq, porc, pors;
      
     for( int i = 0; i < 1000000; i++){

          rn = dado();
          if (rn == 1){
               a++;
          } else if (rn  == 2){
               d++;
          } else if (rn == 3){
               t++;
          } else if (rn == 4){
               q++;
          } else if (rn == 5){
               c++;
          } else if (rn == 6){
               s++;
          }
     }

    poru = (float)a * 100 / 1000000; 
    pord = (float)d * 100 / 1000000;
    port = (float)t * 100 / 1000000;
    porq = (float)q * 100 / 1000000;
    porc = (float)c * 100 / 1000000;
    pors = (float)s * 100 / 1000000;


    printf("porcentagem de 1: %.2f \n", poru);
    printf("porcentagem de 2: %.2f \n", pord);
    printf("porcentagem de 3: %.2f \n", port);
    printf("porcentagem de 4: %.2f \n", porq);
    printf("porcentagem de 5: %.2f \n", porc);
    printf("porcentagem de 6: %.2f \n", pors);
    

}


