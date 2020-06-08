/*
Faça um Programa que leia três números e mostre o maior e o menor
deles.
*/

# include <stdio.h>

void MaiorMenor(int a, int b, int c);
int Maior(int a, int b, int c);
int Menor(int a, int b, int c);

main()
{
    int x,y,z;

    printf("Digite tres numeros: "); scanf("%d %d %d",&x,&y,&z);
    MaiorMenor(x,y,z);
    printf("\n\n \"Maior\" e \"Menor\" numeros \n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    printf("Maior numero: %d ::: Menor numero: %d",Maior(x,y,z),Menor(x,y,z));
    printf("\n\n\n");
}

void MaiorMenor(int a, int b, int c)
{
    if (a > b &&  a > c) printf("O numero %d eh o maior.",a);
    if (b > a &&  b > c) printf("O numero %d eh o maior.",b);
    if (c > a &&  c > b) printf("O numero %d eh o maior.",c);
    printf("\n");
    if (a < b &&  a < c) printf("O numero %d eh o menor.",a);
    if (b < a &&  b < c) printf("O numero %d eh o menor.",b);
    if (c < a &&  c < b) printf("O numero %d eh o menor.",c);
    printf("\n");
}
int Maior(int a, int b, int c)
{
    if (a > b &&  a > c) return a;
    if (b > a &&  b > c) return b;
    if (c > a &&  c > b) return c;
}
int Menor(int a, int b, int c)
{
    if (a < b &&  a < c) return a;
    if (b < a &&  b < c) return b;
    if (c < a &&  c < b) return c;
}

