#include <stdio.h>
#include <stdlib.h>

void cabecalho();
void cabecalho2(char linha1[30], char linha2[30], char linha3[30]);

main()
{
    cabecalho();
    system("pause");
    cabecalho2("FAETERJ PARACAMBI", "CURSO DE SISTEMA DE INFORMACAO", "AL2");
}

void cabecalho()
{

system("cls");
printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
printf("           FAETERJ PARACAMBI             \n");
printf("              DISCIPLINA - AL2           \n");
printf("       PRIMEIRO PROGRAMA - FUNCOES       \n");
printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
}

void cabecalho2(char linha1[30],char linha2[30],char linha3[30])

{
    system("cls");
    printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n");
    printf("%s\n%s\n%s\n", linha1, linha2, linha3);
    printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n");
}
