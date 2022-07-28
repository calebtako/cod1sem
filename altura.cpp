#include<stdio.h>
#include<stdlib.h>
float ald, alu, cal;
main()
{
	printf("qual a altura do de grau");
	scanf("%f" ,&ald);
	printf("qual a altura que o usuario deseja alcarsar");
	scanf("%f" ,&alu);
	cal=(alu/ald);
	printf("o usuario devera subir %.1f" ,cal);
	return 0;
}

