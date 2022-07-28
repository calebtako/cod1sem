#include <stdio.h>
#include <stdlib.h>
int soma = 0, a;

main()
{

do

{

   printf("\nDigite um numero inteiro para somar, ou zero para terminar a soma: ");

   scanf("%d", &a);

   soma = soma + a;

}

while ( a != 0 );

printf("\nA soma e %d.", soma);
}
