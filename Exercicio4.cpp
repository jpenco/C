#include <stdio.h>

main ()

{
    float n1, n2, n3, n4, m;

    printf("Introduza a nota do 1 Bimestre: ");
    scanf("%f",&n1);
    printf("Introduza a nota do 2 Bimestre: ");
    scanf("%f",&n2);
    printf("Introduza a nota do 3 Bimestre: ");
    scanf("%f",&n3);
    printf("Introduza a nota do 4 Bimestre: ");
    scanf("%f",&n4);

    m = (n1 + n2 + n3 + n4) / 4 ;

    printf ("a media do aluno foi %f \n", m);

}
