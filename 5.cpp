#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int r;
	int *pont;
	
	printf("Digite um número: ");
	scanf("%d", &r);
	
	pont = &r;
	
	printf("Valor apontado pelo usuário: %d valor Dobrado :%d", *pont, *pont * 2);
	
	return 0;
}
