//somar todos os pares menores que 20

#include <stdlib.h>
#include <stdio.h>

void main() {
int soma, i;
	
	soma = 0;
	for (i=0; i<20; i+=2)
		soma += i;
	
	printf("A soma dos números pares é: %d\n", soma);	
}