/*
Faça um programa para a leitura de duas notas parciais de um aluno.
O programa deve calcular a média alcançada por aluno e apresentar:
• A mensagem "Aprovado", se a média alcançada for maior ou igual
a sete;
• A mensagem "Reprovado", se a média for menor do que sete;
• A mensagem "Aprovado com Distinção", se a média for igual a
dez.
*/
# include <stdio.h>
# include <windows.h>

void CalculaMedia (float n1, float n2);
int CalculaMedia2 (float n1, float n2);

main()
{
    float nota1,nota2;

    printf("Digite duas notas: "); scanf("%f %f",&nota1,&nota2);
    CalculaMedia(nota1,nota2);
    Sleep(1000); // delay
    printf("\n\nCalculando com CALCULAMEDIA2\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    if (CalculaMedia2(nota1,nota2)==1) printf("Aprovado com distincao... :))))");
    if (CalculaMedia2(nota1,nota2)==2) printf("Reprovado... :(");
    if (CalculaMedia2(nota1,nota2)==3) printf("Aprovado... :)");
    Sleep(2000);
    printf("\n\n\n");

}

void CalculaMedia (float n1, float n2)
{
    float media;
    media = (n1+n2)/2;
    if (media==10) printf("Aprovado com distincao... :))))");
    else
    {
        if (media < 7) printf("Reprovado... :(");
        else printf("Aprovado... :)");
    }
}

int CalculaMedia2 (float n1, float n2)
{
    float media;
    media = (n1+n2)/2;
    if (media==10) return 1;
    else
    {
        if (media < 7) return 2;
        else return 3;
    }
}


