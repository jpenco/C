#include<stdio.h>
/*
15.	Faça um programa que ordene os elementos de um
vetor em ordem crescente.
*/
int main()
{
    int A[10],aux;
    for (int i=0; i<10; i++)
    {
        printf ("Digite o elemento da posicao %d:",i);
        scanf ("%d",&A[i]);
    }
    int emOrdem;
    do
    {
        emOrdem=1;
        for (int i=0; i<10-1; i++)
        {
            if (A[i]>A[i+1])
            {
                aux=A[i];
                A[i]=A[i+1];
                A[i+1]=aux;
                emOrdem=0;
            }
        }
    }
    while(emOrdem==0);

    for (int i=0; i<10; i++)
    {
        printf ("%d ",A[i]);
    }
}
