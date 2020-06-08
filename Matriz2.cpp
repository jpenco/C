#include <stdio.h>
#include <stdlib.h>
#define TAM 6
#define faixa 20+1

void PreencheMatriz (int mat[TAM][TAM]);
void EscreveMatriz (int mat[TAM][TAM]);

main ()
{
    int matriz[TAM][TAM];
    PreencheMatriz(matriz);
    EscreveMatriz(matriz);
}
void PreencheMatriz(int mat[TAM][TAM])
{
    int lin, col;
    for (lin=0;lin<TAM;lin++)
    for (col=0;col<TAM;col++)
        mat[lin][col] = rand()%faixa;
}
void EscreveMatriz (int mat [TAM][TAM])
{
    int lin,col;
    for(lin=0;lin<TAM;lin++)
    {
        for(col=0;col<TAM;col++)
            printf("%.2d\t",mat[lin][col]);
        printf("\n\n");
    }
}
