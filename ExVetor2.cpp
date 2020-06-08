#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int v1[10],v2[10],v3[10],v4[30];
int preenche_vetor(int fv1[10], int fv2[10], int fv3[10],int fv4[30]);
void imprime();
main()
{
	system ("Color 0A");
    preenche_vetor(v1,v2,v3,v4);
    imprime();


	printf ("\n\n");
	system ("pause");
}
int preenche_vetor(int fv1[10], int fv2[10], int fv3[10],int fv4[30])
{
    int i;
    for (i=0;i<10;i++)
    {
        fv1[i]=rand()%100+1;
        fv2[i]=rand()%100+1;
        fv3[i]=rand()%100+1;
    }
    for (i=0;i<10;i++)
    {
        fv4[i]=fv1[i];
    }
    for (i=10;i<20;i++)
    {
        fv4[i]=fv2[i-10];
    }
    for (i=20;i<30;i++)
    {
        fv4[i]=fv3[i-20];
    }
}
void imprime()
{int i;
    printf ("***Vetor 1***\n");
    for (i=0;i<10;i++)
    {
        printf ("Posicao %d: %d\n",i,v1[i]);
    }
    printf ("\n\n***Vetor 2***\n");
    for (i=0;i<10;i++)
    {
        printf ("Posicao %d: %d\n",i,v2[i]);
    }
    printf ("\n\n***Vetor 3***\n");
    for (i=0;i<10;i++)
    {
        printf ("Posicao %d: %d\n",i,v3[i]);
    }
    printf ("\n\n***Vetor 4***\n");
    for (i=0;i<30;i++)
    {
        printf ("Posicao %d: %d\n",i,v4[i]);
    }
}
