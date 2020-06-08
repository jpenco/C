# include <stdio.h>
# include <stdlib.h>

// area de declaração de protótipos de função

/*struct registro
{
	char nome[40];
	int mat;
	float n1,n2;
};
registro reg_aluno; criação da variavel de estrutura --> reg_aluno do tipo registro*/

typedef struct
{
	char nome[40];
	int mat;
	float n1,n2;
} registro;

registro reg_aluno; //criação da variavel de estrutura --> reg_aluno do tipo registroi

void Entrada_de_dados();
void Escreve_Registro();
int Valida_Nota(float fnota);

main()
{
	Entrada_de_dados();
	Escreve_Registro();
	printf("\n\n");
	system("pause");
}

// área de declaração dos códigos da função

void Entrada_de_dados()
{
	printf("Entrada de dados\n");
	printf("===================\n\n");
	printf("Nome do aluno -> "); gets(reg_aluno.nome);//scanf("%s",&reg_aluno.nome);
	printf("Matricula -----> "); scanf("%d",&reg_aluno.mat);
	do
	{
		printf("Nota1 ---------> "); scanf("%f",&reg_aluno.n1);
	} while (Valida_Nota(reg_aluno.n1));
	do
	{
		printf("Nota2 ---------> "); scanf("%f",&reg_aluno.n2);
	} while (Valida_Nota(reg_aluno.n2));

}

void Escreve_Registro()
{
	printf("\n\nSaida de dados\n");
	printf("===================\n\n");
	printf("Nome do aluno -> %s\n",reg_aluno.nome);
	printf("Matricula -----> %d\n",reg_aluno.mat);
	printf("Nota1 ---------> %.2f\n",reg_aluno.n1);
	printf("Nota2 ---------> %.2f\n",reg_aluno.n2);
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

