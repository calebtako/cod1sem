#include<stdio.h>
#include<stdlib.h>
float c, f;
main(temperatura)
{
	printf("qual a temperatura em celcios atual ");
	scanf("%f", &c);
	f=(c*(9.0/5.0)+32.0);
	printf("a temperatura em fahrenheit e de %f" ,f);
	
	return 0; 
}

