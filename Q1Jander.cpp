# include <stdio.h>
# include <stdlib.h>
# include <math.h>

// area de declaração de protótipos de função

float Serie2(int termos,float fx, float fy);
int Validacao(int termos,float fx, float fy);

main()
	{

	int t;
	float x,y;
	do
			{
			printf("Digite o valor de X......: ");
			scanf("%f",&x);
			printf("Digite o valor de Y......: ");
			scanf("%f",&y);
			printf("Digite o numero de termos: ");
			scanf("%d",&t);
			printf("\n\n");
			}
	while (Validacao(t,x,y));
	printf("\n\nS = %.2f",Serie2(t,x,y));
	printf("\n\n");
	system("pause");
	}

// área de declaração dos códigos da função

float Serie2(int termos,float fx, float fy)
	{
	int i;
	float s=0,fn=4,fd=1,num,den;
	for (i=0; i<termos; i++)
			{
			num=fn*termos+(pow(fx,termos-i));
			printf("NUM->[%.2f] / ",num);
			den=fd*fy*pow(fx,fy);
			printf("DEN->[%.2f] = ",den);
			printf("%.2f\n",num/den);
			s+=(num/den);
			fn+=3;
			fd*=2;
			}
	return s;
	}
int Validacao(int termos,float fx, float fy)
	{
	if ((termos>=1 && termos<=10)&&(fx>=1 && fx<=5)&&(fy>=1 && fy<=5)) return 0;
	else
			{
			printf("Foi digitado um valor invalido... redigite!\n\n");
			return 1;
			}
	}
