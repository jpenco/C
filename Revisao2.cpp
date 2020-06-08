# include <stdlib.h>
# include <stdio.h>
# include <conio.h>

using namespace std;

int idade, resultado;

main()
{
	printf("Informe a idade: ");
	scanf("%d", &idade);

	resultado = (idade * 365);

	printf("A idade informada convertida para dias eh: %d", resultado);

	getch();
}
