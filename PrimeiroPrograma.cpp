# include <stdio.h>   // comandos de E/S C. scanf/printf
# include <stdlib.h>  // comandos system
# include <iostream>  // biblioteca cin cout
# include <conio.h>   // uso do getch

// area de declara��o de prot�tipos de fun��o

using namespace std;  // diretiva para utiliza��o dos comandos c++

main()
{
	int a;
	printf("Fazendo o codigo usando C \n\n");
	printf("Digite um numero >>> "); scanf("%d",&a);
	printf("Decimal....: %.2d\n",a);
	printf("Octal......: %o\n",a);
	printf("Hexadecimal: %x\n",a);

	printf("Pressione uma tecla para continuar!!!!! :)\n\n"); getch();
	system("cls");

	printf("Fazendo o codigo usando C++ \n\n");
	std::cout << "Digite um numero >>> "; std::cin >> a;
	std::cout << a << std::endl << std::endl;
	std::cout << "Pressione uma tecla para continuar!!!!! :)"; getch();


	//system("pause");
}

// �rea de declara��o dos c�digos da fun��o
