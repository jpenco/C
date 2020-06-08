#include<stdio.h>
#include<iostream>

using namespace std;

int somacor(int somacor1);

main()

{
int matriz[4][4], vetor[16], somatorio=0, i=0, j=0, k=0, somacores=0, somazeros=0, somaum=0;
    for(i=0;i<4;i++)
        {
        for(j=0;j<4;j++)
        {
            cout<<"Entre com o valor \n ";
            cin>>matriz[i][j];
        }
    }

    for(i=0;i<4;i++)
        {
        for(j=0;j<4;j++)
        {
            if(j>i)
                somatorio += matriz[i][j];
            if(matriz[i][j] == 1)
                somacores+= matriz[i][j];
            if(matriz[i][j] == 0)
            {
                vetor[k] = matriz[i][j];
                k++;
                somazeros++;
            }
        }

    cout<<"somatorio : \n "<<somatorio;

    somacor(somacores);

    for(i=0;i<4;i++)
        {
        for(j=0;j<4;j++)
            {
            if(matriz[i][j]==1)
                {
                vetor[k]=matriz[i][j];
                k++;
                somaum++;
                }
            }
        }

    for(k=0;k<16;k++)
        {
        cout<<vetor[k]<<endl;
        }

    cout<<"somatorio de zeros no vetor: \n\n " << somazeros;
    cout<<"somatorio de um's no vetor: \n\n " << somaum;

   return(0);
    }
}

int somacor (int somacor1)
{
    switch(somacor1)
    {
        case 0:
            cout<<" Branco ";break;
        case 1:
            cout<<" Preto ";break;
        case 2:
            cout<<" Cinza ";break;
        case 3:
            cout<<" Vermelho ";break;


        }

}





