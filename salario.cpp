#include<stdio.h>
#include<stdlib.h>
#include <math.h>
float salario, ajuste;
main()
{
	printf("qual o salario do funcionario ");
	scanf("%f" ,&salario);
	ajuste = (salario*1.25);
	printf("o salario com ajuste de 25%% sera de %.0f" ,ajuste);
	return 0;
	
}
