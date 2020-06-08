# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <windows.h>

# define MAX 30

typedef struct tipodata
{
    int dia,mes,ano;
};

typedef struct tiponotas
{
    float n1,n2,n3;
};

typedef struct registro
{
    int matricula;
    char nome[30], endereco[30];
    tipodata dtnasc;
    tiponotas nota;
};

registro aluno[MAX];

void Insere_dados();
void Imprime_dados();
char * Atribui_nome(int valor);
char * Atribui_endereco(int valor);


main()
{
    Insere_dados();
    Imprime_dados();
}

void Insere_dados()
{
    int i;
    printf("Aguarde...preenchendo dados...\n");
    printf("-------------------------------\n\n");
    Sleep(2000);
    for (i=0;i<MAX;i++)
    {
        aluno[i].matricula = i+1;
        strcpy(aluno[i].nome,Atribui_nome(rand()%7+1));
        strcpy(aluno[i].endereco,Atribui_endereco(rand()%7+1));
        aluno[i].dtnasc.dia=rand()%31+1;
        aluno[i].dtnasc.mes=rand()%12+1;
        aluno[i].dtnasc.ano=rand()%30+1970;
        aluno[i].nota.n1=rand()%10+1;
        aluno[i].nota.n2=rand()%10+1;
        aluno[i].nota.n3=rand()%10+1;
    }
}
void Imprime_dados()
{
    int i;
    system("cls");
    printf("Saida de dados\n");
    printf("------------------\n\n");
    for (i=0;i<MAX;i++)
    {
        printf("Matricula.........: %d\tNome: %s\n",aluno[i].matricula,aluno[i].nome);
        printf("Endereco..........: %s\n",aluno[i].endereco);
        printf("Data de nascimento: %.2d/%.2d/%d\n",aluno[i].dtnasc.dia,aluno[i].dtnasc.mes,aluno[i].dtnasc.ano);
        printf("Notas.............: N1 = %.2f\tN2 = %.2f\tN3 = %.2f\n\n",aluno[i].nota.n1,aluno[i].nota.n2,aluno[i].nota.n3);
    }
}

char * Atribui_nome(int valor)
{
    switch (valor)
    {
        case 1: return "JUNIOR"; break;
        case 2: return "JANDER"; break;
        case 3: return "MATHEUS FELIX"; break;
        case 4: return "INGRID"; break;
        case 5: return "THAILANE"; break;
        case 6: return "AARON"; break;
        case 7: return "THAIS"; break;
    }
}

char * Atribui_endereco(int valor)
{
    switch (valor)
    {
        case 1: return "Rua Othon dos Santos - Lages"; break;
        case 2: return "Rua Francisco Dias Raposo, 26 - Centro"; break;
        case 3: return "Estrada Paracambi - Santa Sofia"; break;
        case 4: return "Vila Paracambi - Lagomar"; break;
        case 5: return "Estrada Paracambi-japeri"; break;
        case 6: return "Rua Paracambi - Queimados"; break;
        case 7: return "Rua Paracambi - Bangu"; break;
    }
}
