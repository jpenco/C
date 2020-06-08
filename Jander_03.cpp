#include <stdio.h>
#include <conio.h>

int main()
{
   int conth, contm, altura, sexo;
   int menoraltura, maioraltura, cont_altura_mu, med_alt_mu;

   conth = 0;
   maioraltura = 0;
   med_alt_mu = 0;
   menoraltura = 0;
   cont_altura_mu = 0;

   do

    {
      //conta_pessoas++;

      printf("\n\nInforme a altura da pessoa %d: ", altura);
      scanf("%d",&altura);
      printf("\n\nInforme o sexo da pessoa %d: ", sexo);
      scanf("%d", &sexo);

      if (sexo = 1)
      {
          cont_altura_mu++;
          contm++;
      }
      else
      {
          if (sexo = 2)
            conth++;
      }

      if (altura != 0)
        {
         maioraltura = maioraltura + altura;

         if (conta_pessoas == 1)
            {
            menoraltura = altura;
            maioraltura = altura;
             }
         else
         {
            if (altura < menoraltura)
            {
               menoraltura = altura;
            }

            if (altura > maioraltura)
                {
                 maioraltura = altura;
            }
         }
      }
   } while (altura != 0);

   med_alt_mu = cont_altura_mu/contm;

   printf("\nA Maior altura do grupo foi: %d", maioraltura);
   printf("\nA Menor altura do grupo foi: %d", menoraltura);
   printf("\nA Media de altura das mulheres eh: %d",med_alt_mu);
   printf("\nO Numero de Homens foram: %d",conth);

   getch();

   return 1;
}
