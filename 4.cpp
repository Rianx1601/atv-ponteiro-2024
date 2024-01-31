#include <stdio.h>
#include <stdlib.h>


int main () {
	
	int n, *vet;
	
	printf("digite um numero de vezes que quer digitar:");
	scanf("%d", &n);
	
	vet = (int*)malloc(n * sizeof(int));
	
	for(int i = 0; i < n; i++) {
		printf("digite um numero inteiro - %d:", i + 1);
		scanf("%d", &vet[i]);
	}
	
	printf("\nnumeros de forma inversa: \n");
	
	for(int i = n - 1; i >= 0; i--) {
		printf("%d ", *(vet+i));
	}
	
	free(vet);
	
	return 0;
}
