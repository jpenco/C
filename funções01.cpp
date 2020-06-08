# include <stdio.h>
# include <stdlib.h>

// área de declaração de protótipos de funções

void Cabecalho();
void Cabecalho2(char linha1[30],char linha2[30],char linha3[30]);

main()
{
	Cabecalho();
	system("pause");
	Cabecalho2("FAETERJ PARACAMBI","CURSO DE SISTEMAS DE INFORMACAO","DISCIPLINA - AL2");
}

void Cabecalho()
{
	system("cls");
	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	printf("        FAETERJ PARACAMBI        \n");
	printf("         DISCIPLINA - AL2        \n");
	printf("  Primeiro programa - FUNCOES    \n");
	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}

void Cabecalho2(char linha1[30],char linha2[30],char linha3[30])

{
	system("cls");
	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	printf("%s\n%s\n%s\n",linha1,linha2,linha3);
	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}
