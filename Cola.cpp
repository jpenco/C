#include<stdio.h>
/*
2.	Escreva um programa que leia e mostre um vetor
de 10 elementos inteiros. A seguir, conte quantos
valores pares existem no vetor.
*/
int main()
{
    int vetor[10];
    for (int i=0; i<10; i++) //mesmo que <=4
    {
        printf ("Digite o elemento da posicao %d:",i);
        scanf ("%d",&vetor[i]);
    }
    printf ("Todos os elementos\n");
    for (int i=0; i<10; i++)
    {
        printf ("%d ",vetor[i]);
    }
    printf ("\nSomente os pares\n");
    int contaPares=0;
    for (int i=0; i<10; i++)
    {
        if (vetor[i]%2==0)
        {
            printf ("%d ",vetor[i]);
            contaPares++;
        }
    }
    printf ("\nExistem %d pares no vetor",contaPares);
}


#include<stdio.h>
/*
4.	Ler 5 elementos  de um vetor  A e um valor x.
Criar o vetor B contendo os  elementos do vetor A
multiplicados por x.*/
int main()
{
    int A[5],x,B[5];
    for (int i=0; i<5; i++) //mesmo que <=4
    {
        printf ("Digite o elemento da posicao %d:",i);
        scanf ("%d",&A[i]);
    }
    printf ("Digite o valor de x:");
    scanf ("%d",&x);
//    B=A*x;
    for (int i=0; i<5; i++)
    {
        B[i]=A[i]*x;
    }
    for (int i=0; i<5; i++)
    {
        printf ("%d ",B[i]);
    }


}


#include<stdio.h>
/*
6.	Escreva um programa que leia um vetor inteiro de 5
 posições e crie um segundo vetor, substituindo os valores
 zero por 1. Mostre os 2 vetores.*/
int main()
{
    int A[5],B[5];
    for (int i=0; i<5; i++) //mesmo que <=4
    {
        printf ("Digite o elemento da posicao %d:",i);
        scanf ("%d",&A[i]);
    }
//    B=A
    for (int i=0; i<5; i++)
    {
        //B[i]=A[i]==0?1:A[i];
        if (A[i]==0)
        {
            B[i]=1;
        }
        else
        {
            B[i]=A[i];
        }
    }
    printf ("Vetor A:");
    for (int i=0; i<5; i++)
    {
        printf ("%d ",A[i]);
    }
    printf ("\nVetor B:");
    for (int i=0; i<5; i++)
    {
        printf ("%d ",B[i]);
    }


}



#include<stdio.h>
/*
7.	Dado um vetor A de números inteiros,
obter a maior diferença entre dois elementos
consecutivos desse vetor.
Imprimir a maior diferença e os índices dos
respectivos elementos.
*/
int main()
{
    int A[5],maiorDiferenca=0,posicao=0;
    for (int i=0; i<5; i++) //mesmo que <=4
    {
        printf ("Digite o elemento da posicao %d:",i);
        scanf ("%d",&A[i]);
    }
    for (int i=0; i<5-1; i++)  // o menos um é porque é penúltimo
    {
        if (A[i]-A[i+1]>maiorDiferenca)
        {
            posicao=i;
            maiorDiferenca=A[i]-A[i+1];
        }
        if (A[i+1]-A[i]>maiorDiferenca)
        {
            posicao=i;
            maiorDiferenca=A[i+1]-A[i];
        }
    }
    printf ("A maior diferenca vale %d entre %d e %d",
            maiorDiferenca,posicao,posicao+1);

}


#include<stdio.h>
/*
8.	Dado um vetor A de números reais, fazer um
programa para obter o maior e o segundo maior elemento
 do vetor.
*/
int main()
{
    float reais[5],maior=0,segundomaior=0;
    for (int i=0; i<5; i++) //mesmo que <=4
    {
        printf ("Digite o elemento da posicao %d:",i);
        scanf ("%f",&reais[i]);
    }
    for (int i=0; i<5; i++)
    {
        if (reais[i]>maior)
        {
            segundomaior=maior;
            maior=reais[i];
        }
        else if (reais[i]>segundomaior)
        {
          segundomaior=reais[i];
        }
    }
    printf ("O maior vale %f e o segundo vale %f",maior,segundomaior);
}


#include<stdio.h>
/*
9.	Faça um programa que leia um vetor de 10 posições
de números e divida todos os seus elementos pelo maior
valor do vetor. Mostre o vetor após os cálculos.
*/
int main()
{
    float reais[10],maior=0;
    for (int i=0; i<10; i++)
    {
        printf ("Digite o elemento da posicao %d:",i);
        scanf ("%f",&reais[i]);
    }
    for (int i=0; i<10; i++)
    {
        if (reais[i]>maior)
        {
            maior=reais[i];
        }
    }
    for (int i=0; i<10; i++)
    {
        reais[i]=reais[i]/maior;
    }
    for (int i=0; i<10; i++)
    {
        printf ("%.2f ",reais[i]);
    }

}


#include<stdio.h>
/*
10.	Faça um programa que leia um vetor A de 10
posições. Em seguida, compacte o vetor, retirando
os valores nulos e negativos. Coloque o resultado
no vetor B.
*/
int main()
{
    float A[10],B[10];
    for (int i=0; i<10; i++)
    {
        printf ("Digite o elemento da posicao %d:",i);
        scanf ("%f",&A[i]);
    }
    int j=0;
    for (int i=0; i<10; i++)
    {
        if (A[i]>0)
        {
            B[j]=A[i]; //O vetor B utiliza o índice j
            j++;       //ao invés do i pois alguns
        }              //elementos não devem ser copiados
    }
    for (int i=0; i<j; i++)//Ao final do for anterior
    {                      //o j vale o número de elemtons do vetor B
        printf ("%.2f ",B[i]);
    }
}


#include<stdio.h>
/*
11.	Escrever um programa para ler um vetor de 10
posições. Em seguida, trocar o primeiro elemento com
o último, o segundo com o penúltimo, o terceiro com
o antepenúltimo, e assim sucessivamente.
Imprimir o vetor após a troca.
*/
int main()
{
    float A[10],aux;
    for (int i=0; i<10; i++)
    {
        printf ("Digite o elemento da posicao %d:",i);
        scanf ("%f",&A[i]);
    }
    for (int i=0; i<5; i++)
    {
        aux=A[i];
        A[i]=A[9-i];
        A[9-i]=aux;
    }
    for (int i=0; i<10; i++)
    {
        printf ("%.2f ",A[i]);
    }
}


#include<stdio.h>
/*
13.	Dado dois vetores, A (N elementos) e B (M elementos),
faça um programa que imprima todos  os elementos comuns
aos dois vetores.
*/
int main()
{
    int M[5],N[4];
    for (int i=0; i<5; i++)
    {
        printf ("Vetor M Digite o elemento da posicao %d:",i);
        scanf ("%d",&M[i]);
    }
    for (int i=0; i<4; i++)
    {
        printf ("Vetor N Digite o elemento da posicao %d:",i);
        scanf ("%d",&N[i]);
    }
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (M[i]==N[j])
            {
                printf ("%d ",M[i]);
            }
        }
    }
}

#include<stdio.h>
/*
14.	Faça um programa que verifique se os elementos de
um vetor A estão em ordem crescente.
*/
int main()
{
    int A[10];
    for (int i=0; i<10; i++)
    {
        printf ("Digite o elemento da posicao %d:",i);
        scanf ("%d",&A[i]);
    }
    int emOrdem=1;

    for (int i=0; i<10-1; i++)
    {
      if (A[i]>A[i+1])
      {
         emOrdem=0;
      }
    }

    if (emOrdem==1){
       printf ("Esta em ordem");
    }
    else
    {
        printf("Nao esta em ordem");
    }
}






