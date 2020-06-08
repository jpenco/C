#include <stdio.h>
#include <iostream.h>
define

struct RegFuncionario {
char nome [30], setor [10];
int matricula [8], dependente [2];
float sal_base;
}
struct RegSal {
int matricula;
float sal_bruto, sal_liquido;
}


int main()
{
int i;
struct RegFunc VFunc [500];
struct RegSal VSal [500];

for (i=0; i<=500; i++)
{
    cin >> VFunc[i];
    VSal.matricula[i]=VFunc.matricula[i];
    VSal.sal_bruto[i]=Vfunc.sal_base[i]+(VFunc.dependente[i]*2000);
    VSal.sal_liquido[i]=VSal.sal_bruto[i]-(VSal.bruto[i]*0.10);

    cout << VFunc.matricula[i] << VFunc.nome[i] << VFunc.setor[i];
    cout << VFunc.sal_base[i] << VSal.sal_bruto[i] << VSal.sal_liquido[i];

    if

        (Vsal.sal_bruto[i] > 6000)
        {
            cout << "Salario com desconto de IRPF.";
        }
        else
            (VSal.sal_bruto[i] < 1200)
        {
            cout << "Salario sem desconto de IRPF.";
        }
        end if
        end if
    }

}


