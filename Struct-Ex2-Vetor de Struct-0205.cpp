# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define t 3

// area de declaração de protótipos de função

/*struct registro
{
	char nome[40];
	int mat;
	float n1,n2;
};
registro reg_aluno[t]; criação da variavel de estrutura --> reg_aluno do tipo registro*/

typedef struct
	{
	char nome[40];
	int mat;
	float n1,n2,n3;
	} registro;

registro reg_aluno[t]; //criação do vetor de estrutura --> reg_aluno do tipo registro

void Entrada_de_dados();
void Escreve_Registro();
int Valida_Nota(float fnota);
void Nota1_Mais_Baixa();
void Nota2_Mais_Alta();
float Media_Notas(registro freg_aluno[t]);

main()
	{
	Entrada_de_dados();
	Escreve_Registro();
	Nota1_Mais_Baixa();
	Nota2_Mais_Alta();
	printf("Media de Notas: %.2f",Media_Notas(reg_aluno));
	printf("\n\n");
	system("pause");
	}

// área de declaração dos códigos da função

void Entrada_de_dados()
	{
	int i;
	printf("Entrada de dados\n");
	printf("===================\n\n");
	for (i=0; i<t; i++)
			{
			fflush(stdin);
			printf("Nome do aluno -> ");
			gets(reg_aluno[i].nome);//scanf("%s",&reg_aluno.nome);
			printf("Matricula -----> ");
			scanf("%d",&reg_aluno[i].mat);
			do
					{
					printf("Nota1 ---------> ");
					scanf("%f",&reg_aluno[i].n1);
					}
			while (Valida_Nota(reg_aluno[i].n1));
			do
					{
					printf("Nota2 ---------> ");
					scanf("%f",&reg_aluno[i].n2);
					}
			while (Valida_Nota(reg_aluno[i].n2));
			do
					{
					printf("Nota3 ---------> ");
					scanf("%f",&reg_aluno[i].n3);
					}
			while (Valida_Nota(reg_aluno[i].n3));
			printf("\n");
			}

	}

void Escreve_Registro()
	{
	int i;
	printf("\n\nSaida de dados\n");
	printf("===================\n\n");
	for (i=0; i<t; i++)
			{
			printf("Nome do aluno -> %s\n",reg_aluno[i].nome);
			printf("Matricula -----> %d\n",reg_aluno[i].mat);
			printf("Nota1 ---------> %.2f\n",reg_aluno[i].n1);
			printf("Nota2 ---------> %.2f\n",reg_aluno[i].n2);
			printf("Nota3 ---------> %.2f\n",reg_aluno[i].n3);
			printf("\n..................................\n");
			}
	}

int Valida_Nota(float fnota)
	{
	if (fnota<0 or fnota>10)
			{
			printf("\n>>> Nota invalida. Digite um valor entre 0 e 10...\n\n");
			return 1;
			}
	else return 0;
	}

void Nota1_Mais_Baixa()
{
	float nmb=11;
	int i;
	char nomenmb[40];

	for (i=0;i<t;i++)
		if (reg_aluno[i].n1 < nmb)
		{
			nmb = reg_aluno[i].n1;
			strcpy(nomenmb,reg_aluno[i].nome);
		}

	printf("\n");
	printf("N1 mais baixa: %.2f ::: Aluno: %s",nmb,nomenmb);
}
void Nota2_Mais_Alta()
{
	float nma=0;
	int i;
	char nomenma[40];

	for (i=0;i<t;i++)
		if (reg_aluno[i].n2 >= nma)
		{
			nma = reg_aluno[i].n2;
			strcpy(nomenma,reg_aluno[i].nome);
		}

	printf("\n");
	printf("N2 mais alta: %.2f ::: Aluno: %s",nma,nomenma);
}
float Media_Notas(registro freg_aluno[t])
{
	float soma=0;
	int i;
	for (i=0;i<t;i++)
		soma+=(freg_aluno[i].n1+freg_aluno[i].n2);
	printf("\n");
	return soma/(t*2); // pois são duas notas...
}

