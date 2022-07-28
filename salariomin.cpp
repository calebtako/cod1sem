#include<stdio.h>
#include<stdlib.h>
float sal_min, sal_pes, qnt;
main()
{
	printf("qual o valor do salario minimo \n");
	scanf("%f" ,&sal_min);
	printf("qual o salario atual da pessoa \n");
	scanf("%f" ,&sal_pes);
	qnt=(sal_pes/sal_min);
	printf("a pessoa recebe %.f ",qnt);
	return 0;
}
