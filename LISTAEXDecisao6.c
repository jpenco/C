/*
Faça um Programa que leia três números e mostre-os em ordem
decrescente.
*/

# include <stdio.h>

void Ordena1(int a, int b, int c);
int Ordena2(int a, int b, int c);
void LerDados();

int x,y,z;

main()
{
    LerDados();
    Ordena1(x,y,z);
    printf("\n\nFuncao ORDENA2\n");
    printf("*-*-*-*-*-*-*-*-*-*-*\n");
    switch (Ordena2(x,y,z))
    {
        case 1: printf("Ordem: %d %d %d",x,y,z); break;
        case 2: printf("Ordem: %d %d %d",x,z,y); break;
        case 3: printf("Ordem: %d %d %d",y,x,z); break;
        case 4: printf("Ordem: %d %d %d",y,z,x); break;
        case 5: printf("Ordem: %d %d %d",z,x,y); break;
        case 6: printf("Ordem: %d %d %d",z,y,x); break;
    }
}

void LerDados()
{
    printf("Digite 3 numeros: ");
    scanf("%d %d %d",&x,&y,&z);
}

void Ordena1(int a, int b, int c)
{
    if (a>b && a>c)
    {
        if (b>c) printf("Ordem: %d %d %d",a,b,c);
        else printf("Ordem: %d %d %d",a,c,b);
    }
    if (b>a && b>c)
    {
        if (a>c) printf("Ordem: %d %d %d",b,a,c);
        else printf("Ordem: %d %d %d",b,c,a);
    }
    if (c>a && c>b)
    {
        if (a>b) printf("Ordem: %d %d %d",c,a,b);
        else printf("Ordem: %d %d %d",c,b,a);
    }

}
int Ordena2(int a, int b, int c)
{
    if (a>b && a>c)
    {
        if (b>c) return 1;
        else return 2;
    }
    if (b>a && b>c)
    {
        if (a>c) return 3;
        else return 4;
    }
    if (c>a && c>b)
    {
        if (a>b) return 5;
        else return 6;
    }

}
