# include <stdio.h>
# include <stdlib.h>
# include <iostream>

// area de declara��o de prot�tipos de fun��o

using namespace std;

main()
{
	int a;

	printf("CODIGO DESENVOLVIDO EM C PURO\n");
	printf("-----------------------------\n\n");
	// �rea de desenvolvimento do codigo em C Puro
	printf("Digite um numero: "); scanf("%d",&a);
	printf("O numero digitado foi: [%d]\n\n",a);
	system("pause");
	system("cls");

	printf("CODIGO DESENVOLVIDO EM C++\n");
	printf("-----------------------------\n\n");
	// �rea de desenvolvimento do codigo em C++
	cout << "Digite um numero: "; cin >> a;
	cout << "O numero digitado foi: [" << a << "]" << endl << endl;

	printf("\n\n");
	system("pause");
}

// �rea de declara��o dos c�digos da fun��o
