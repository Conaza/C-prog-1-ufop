#include <stdio.h>
#include <stdlib.h>

 int main (void) {
 system ("clear");
 
 int a, b;	
 
 printf("digite um numero: ");
 scanf("%d", &a);
if (a == 0) {
printf("digite um numero!! ");
} else {
printf("digite outro numero: ");
 scanf("%d", &b);
}
do{
printf("digite um numero!! ");
}while (b == 0);

do {
printf("voce digitou");

}while (b == 1);

	return 0;
}