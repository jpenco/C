# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <windows.h>

main()
{
    char resposta;
    int numero;

    do
    {
        system("cls");
        printf("Aguarde... iniciando o sistema... :)\n\n\n");
        Sleep(2000);
        printf("Trabalhando com o WHILE...\n");
        printf("****************************\n\n");
        numero = 1;
        while (numero<=20)
        {
            printf("Numero: [%.2d]\n",numero);
            numero++;
        }
        printf("\n\nTrabalhando com o DO..WHILE...\n");
        printf("**********************************\n\n");
        numero = 1;
        do
        {
            printf("Numero: [%.2d]\n",numero);
            numero++;
        }
        while (numero<=20);

        printf("\n\nTrabalhando com o FOR...\n");
        printf("**********************************\n\n");

        for(numero=1; numero<=20; numero++)
            printf("Numero: [%.2d]\n",numero);

        do
        {
            fflush(stdin);
            printf("Deseja continuar? [S/N]: ");
            scanf("%c",&resposta);
            resposta = toupper(resposta);
            if (resposta!='S' && resposta!='N')
                printf("Letra invalida... redigite\n");
        } while (resposta!='S' && resposta!='N');


    }
    while (resposta != 'N');
}
