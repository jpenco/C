#include<iostream>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int i;
    int vetor[5];
    for (int i=0; i<5; i++)
    {
        printf ("Digite o elemento da posicao %d:",i);
        scanf ("%d",&vetor[i]);
    }
    printf ("\nSomente os pares\n");
    int vetora=0;
    int vetorb,vetor_par[5];
    for ( i=0; i<5; i++)
    {
        if (vetor[i]%2==0)
        {
            vetor_par[vetora]=vetor[i];
            vetora++;
        }
        else if (vetor[i]%2!=0)
        {
            printf ("%d ",vetor[i]);
            vetorb++;
        }
    }
    for(i=0; i<vetora; i++)
    {
        printf ("%d \n",vetor[i]);
    }
    printf ("\nExistem %d pares no vetor",vetora);
    printf ("\nExistem %d impares no vetor",vetorb);
}
