#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define tam 50

/* Escreva um algoritmo que leia um vetor com 50 posições de números inteiros e mostre somente os positivos */

int main() {
	int i, A[tam];
	for (i=0;i<tam;i++) {
//		scanf("%d", &A[i]);
		A[i]= pow (-1, rand()) * (rand()%100);
		printf("%d ", A[i]);
	}
	printf("\n\n");
	for (i=0;i<tam;i++) {
		if (A[i]>0)
			printf("%d ", A[i]);
	}
	return 0;
}
