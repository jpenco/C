// Ler um vetor A com 20 elementos. Separar os elementos pares e impares de A utilizando
// apenas um vetor extra B. Sugestao: no inicio do vetor B armazene os elementos pares
// de A e nas posicoes restantes do vetor B armazene os elementos de A que sao impares.

#include <stdio.h>
#include <stdlib.h>

void main()
{
  const n = 20;
  int a[n], b[n], i;

  randomize();
  for (i=0; i<n; i++) {
    a[i] = random(100);
  }

  int j = 0; // posicoes iniciais do vetor "b"
  int k = (n - 1); // posicoes finais do vetor "b"
  for (i=0; i<n; i++) {
    if ((a[i] % 2) == 0) {
       b[j] = a[i];
       j++;
    }
    else {
       b[k] = a[i];
       k--;
    }
  }

  printf("Os valores pares e impares do vetor 'a' estao separados no vetor 'b'.\n\n");
  for (i=0; i<n; i++) {
    printf("a[%2d] = %2d   b[%2d] = %2d\n", i, a[i], i, b[i]);
  }
}
