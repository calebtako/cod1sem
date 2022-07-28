#include <stdio.h>
#include <stdlib.h>
float n1, n2, mult;
main ()
{
	do
	{
		printf ("digite um numero \n");
		scanf("%f" ,&n1);
		printf("digite outro numero para a multiplicacao \n");
		scanf("%f" ,&n2);
		mult= n1*n2+mult;
	}
	while ( mult>=10 && mult<=100);
	{
		printf("a multiplicacao e de %.2f \n" ,mult);
	}
	return 0;
}
