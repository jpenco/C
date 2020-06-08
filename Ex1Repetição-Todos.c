# include <stdio.h>

main()
{
    int numero;

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
    } while (numero<=20);

    printf("\n\nTrabalhando com o FOR...\n");
    printf("**********************************\n\n");

    for(numero=1;numero<=20;numero++)
        printf("Numero: [%.2d]\n",numero);
}
