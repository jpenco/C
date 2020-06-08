#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;


struct jogador {
    int id;
   int cartas[5];
};
int sorteio(int n);
main()
    {

        int num;

        cout<<"Entre com o numero de jogadores: ";
        cin>>num;
        sorteio(num);
    }

int sorteio (int n)
    {
        jogador j[n];
        int i,c,soma[n];
        for (i=0;i<n;i++)
        soma[i]=0;
        for (c=0;c<n;c++)
    {
    for (i=0;i<5;i++)
    {
        j[c].id=c;
        j[c].cartas[i]=rand()%5+1;
        soma[c]+=j[c].cartas[i];
    }
    }

    for (c=0;c<n;c++)
        {
            cout<<"ID Do Jogador: " << j[c].id << endl;
            cout<<"Cartas\n ";
            for (i=0;i<5;i++)
        {

        switch(j[c].cartas[i])
        {
            case 1:cout<<" PAUS \n "; break;
            case 2:cout<<" COPAS \n "; break;
            case 3:cout<<" ESPADAS \n "; break;
            case 4:cout<<" OUROS \n "; break;
            case 5:cout<<" CORINGA \n "; break;
         }
    }
    cout<<"Pontuacao obtida: " << soma[c];
    if (soma[c]>0 and soma[c]<6)
        cout<<" FRALDINHA";
    if (soma[c]>5 and soma[c]<11)
        cout<<" INICIANTE";
        if (soma[c]>10 and soma[c]<16)
        cout<<" SORTUDO";
        if (soma[c]>15 and soma[c]<=21)
        cout<<" VIRADO PRA LUA";
    cout<<"\n\n\n";
    }
}
