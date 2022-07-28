#include<stdio.h>
#include<stdlib.h>
#include <math.h>
	float a, b, h;
main()
{
	printf("qual o valor do primeiro cateto");
	scanf("%f" ,&a);
	printf("qual o valor do segundo cateto");
	scanf("%f" ,&b);
	h= sqrt(a*a+b*b);
	printf("o valor da hitpotenusa eh de %.f" ,h);
	return 0;
}
