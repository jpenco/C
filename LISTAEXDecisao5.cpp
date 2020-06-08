/*
Faça um Programa que verifique se uma letra digitada é vogal
ou consoante.
*/

# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

// protótipos de função

void TestaLetra(char letra);
int TestaLetra2(char letra);

main()

{
    char l;

    printf("Digite uma letra qualquer: "); scanf("%c",&l);
    l=tolower(l);
    TestaLetra(l);
    printf("\n\nFuncao TESTALETRA2\n");
    printf("------------------------\n");
    if (TestaLetra2(l)==1) printf("A letra %c eh VOGAL",l);
    else printf("A letra %c eh CONSOANTE",l);
    printf("\n\n");

    // saida utilizando operador ternário ?
    TestaLetra2(l)==1 ? printf("A letra %c eh VOGAL",l) : printf("A letra %c eh CONSOANTE",l);

}

void TestaLetra(char letra)
{
    switch (letra)
    {
        case 'a': printf("Letra %c eh VOGAL",letra); break;
        case 'e': printf("Letra %c eh VOGAL",letra); break;
        case 'i': printf("Letra %c eh VOGAL",letra); break;
        case 'o': printf("Letra %c eh VOGAL",letra); break;
        case 'u': printf("Letra %c eh VOGAL",letra); break;
        default : printf("Letra %c eh CONSOANTE",letra); break;
    }
}
int TestaLetra2(char letra)
{
    switch (letra)
    {
        case 'a': return 1; break;
        case 'e': return 1; break;
        case 'i': return 1; break;
        case 'o': return 1; break;
        case 'u': return 1; break;
        default : return 2; break;
    }
}
