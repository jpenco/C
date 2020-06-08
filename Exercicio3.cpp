#include <stdio.h>

main ()

{
    int numero1, numero2, soma;

    printf("Introduza um numero: ");
    scanf("%d",&numero1);
    printf("Introduza um numero: ");
    scanf("%d",&numero2);

    soma = numero1 + numero2;

    printf ("O numero introduzido foi %d\n", soma);

}
