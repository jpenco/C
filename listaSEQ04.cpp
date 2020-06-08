//Faça um Programa que peça as 4 notas bimestrais e mostre a média.

# include <stdio.h>
# include <stdlib.h>
# include <iostream>

// area de declaração de protótipos de função

using namespace std;

main()
{
	float n1,n2,n3,n4;

	printf("CODIGO DESENVOLVIDO EM C PURO\n");
	printf("-----------------------------\n\n");
	// área de desenvolvimento do codigo em C Puro
	printf("Digite 4 notas: "); scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	printf("As notas %.1f + %.1f + %.1f + %.1f produzem a media: %.2f\n\n",n3,n4,(n1+n2+n3+n4)/4);

	system("pause");
	system("cls");

	printf("CODIGO DESENVOLVIDO EM C++\n");
	printf("-----------------------------\n\n");
	// área de desenvolvimento do codigo em C++

	//cout << "Digite 4 notas: "; cin >> n1 >> n2 >> n3 >> n4;
	//cout.precision(2);
	//cout << fixed;
	//cout << "As notas " << n1 << " + " << n2 << " + " << n3 << " + " << n4 << " produzem a media: " << (n1+n2+n3+n4)/4 << endl << endl;
	printf("\n\n");
	system("pause");
}

// área de declaração dos códigos da função
