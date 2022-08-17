#include <stdio.h>
#include <stdlib.h>

 int main (void) {
	 system ("clear");
	int a, b ,c;
	 printf("Digite um numero:");
	 scanf("%d", &a);

	b = a + 1;
	c = a - 1;

	printf("Antecessor:%d \nSucessor:%d \n", c, b);

	return 0;
}