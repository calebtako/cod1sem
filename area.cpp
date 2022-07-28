#include<stdio.h>
#include<stdlib.h>
float lado, area;
main()
{
	printf("qual o valor de um dos lados do quadrado ");
	scanf("%f" ,&lado);
	area=(lado*lado);
	printf("o valor da area do quadrado eh de: %.f " ,area);
	return 0;
}
