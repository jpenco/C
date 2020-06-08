# include <stdlib.h>
# include <stdio.h>
# include <iostream>

int horastrabalhadas;
float salariohora, salariodia, salariobruto, inss, ir, salarioliquido;

using namespace std;

main ()
	{
	cout << "Informe o total de horas trabalhadas: "; cin >> horastrabalhadas;
	cout << "Informe o ganho por hora trabalhada: "; cin >> salariohora;

	salariodia = (horastrabalhadas*salariohora);

system ("pause");
	printf ("O valor do salario por dia foi de: %f", salariodia);
	}

//  printf("\nIdade media das pessoas pesquisadas: %d",mediaIdade);
//main()
//{
//    int qh;
//    float vh,sb;
//   float sind=3, fgts=11, inss=10;
//    cout << "Digite o valor da hora trabalhada.......: "; cin >> vh;
//    cout << "Digite a quantidade de horas trabalhadas: "; cin >> qh;
//    Calcula_Salario(qh,vh,sind,fgts,inss);
//}

//int Calcula_Salario (int fqh, float fvh, float fsind, float ffgts, float finss)
//{
//   float salbrut;
//   int ir;
//   float d_ir;

//   cout << fsind << endl << ffgts << endl << finss;
//   system("pause");
//   salbrut = fqh * fvh;
//   if (salbrut <= 900) {d_ir = 0; ir = 0;}
//   if (salbrut > 900 and salbrut <= 1500) {d_ir = (salbrut*0.05); ir = 5;}
//    if (salbrut > 1500 and salbrut <= 2500) {d_ir = (salbrut*0.10); ir = 10;}
//    if (salbrut > 2500) {d_ir = (salbrut*0.20); ir = 20;}
//   Escreve_Resultado(fqh,fvh,fsind,ffgts,finss,ir,d_ir);
//}

//void Escreve_Resultado(int fqh, float fvh, float fsind, float ffgts, float finss,int ir,float d_ir)
//{
//    Cabecalho();
//    cout << fsind << endl << ffgts << endl << finss << endl;
//   system("pause");
//   cout.precision(2);
//  cout << fixed;
//  cout << "Salario Bruto: (" << fvh << " x " << fqh << ") ..........: R$ " <<  fqh * fvh << endl;
//  cout << "  (-) IR   (" << ir << ")"    << ".......................: R$ " << d_ir << endl;
//   cout << "  (-) INSS (" << finss << ")" << ".......................: R$ " << fqh * fvh*(finss/100) << endl;
//  cout << "      FGTS (" << ffgts << ")" << ".......................: R$ " << fqh * fvh*(ffgts/100) << endl;
//  cout << "Total de descontos.......................................: R$ " << (fqh * fvh*(finss/100))+d_ir << endl;
//  cout << "Salario Liquido..........................................: R$ " << (fqh * fvh)-((fqh * fvh*(finss/100))+d_ir) << endl ;
//}

//void Cabecalho()
//{
//   system("cls");
//  cout << "*******************************************" << endl;
//    cout << "            FAETERJ - PARACAMBI            " << endl;
//   cout << "      Folha de Pagamento - Aula de C       " << endl;
//  cout << "                03/09/2013                 " << endl;
//   cout << "*******************************************" << endl << endl;
//}
