#include<iostream>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int vetor[10];
    for (int i=0; i<10; i++)
            {
        printf ("Digite o elemento da posicao %d:",i);
        scanf ("%d",&vetor[i]);
            }
    printf ("Todos os elementos\n");
    for (int i=0; i<10; i++)
    {
        printf ("%d ",vetor[i]);
    }
    printf ("\nSomente os pares\n");
    int contaPares=0;
    for (int i=0; i<10; i++)
    {
        if (vetor[i]%2==0)
        {
            printf ("%d ",vetor[i]);
            contaPares++;
        }
    }
    printf ("\nExistem %d pares no vetor",contaPares);
}
