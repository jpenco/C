// Criar dois vetores A e B cada um com 10 elementos inteiros. Desenvolver um programa que crie
// um vetor C que e a diferenca dos conjuntos formados pelos elementos dos vetores A e B.
// Diferenca de conjuntos = todos os elementos do conjunto A que nao existem no conjunto B.

#include "stdio.h"
#include "stdlib.h"

void main()
{
  const n = 10;
  int i, j, k, achou;
  int a[n], b[n], c[n];

  randomize();
  for (i=0; i<n; i++) {
    a[i] = random(20);
  }

  for (i=0; i<n; i++) {
    b[i] = random(20);
  }

  k = 0; // posicao para os elementos da diferenca
  for (i=0; i<n; i++) {
    achou = 0;
    for (j=0; j<n; j++) {
      if (a[i] == b[j])
         achou = 1;
    }

    if (achou == 0) {
       c[k] = a[i];
       k = k + 1;
    }
  }

  printf(" i  a[i]   b[i]   c[i] = diferenca dos vetores 'a' e 'b'\n");
  printf("--------------------------------------------------------\n");
  for (i=0; i<n; i++) {
    printf("%2d  %4d   %4d", i, a[i], b[i]);
    if (i < k)
       printf("   %4d", c[i]);
    printf("\n");
  }
  printf("--------------------------------------------------------");
}
