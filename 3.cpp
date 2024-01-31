#include <stdio.h>

void troca (int *fx, int *fy) {
	
	*fx = *fx + *fy;
	*fy = *fx - *fy;
	*fx = *fx - *fy;
}

int main () {
	
	int x, y;
	
	printf("digite o primeiro numero(inteiro): ");
	scanf("%d", &x);
	printf("digite o segundo numero(inteiro): ");
	scanf("%d", &y);
	
	troca (&x, &y);
	int *fx=&x ,*fy=&y;
	printf("\ntrocando os numeros:\n");
	printf("\nx = %d\ny = %d", x, y);
	
	return 0;
}
