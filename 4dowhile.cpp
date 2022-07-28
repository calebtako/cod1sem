#include <stdio.h>
#include <stdlib.h>
int idade, np=1, mid, i=0;
main()
{
	do
	{
		printf("digite a idade ");
		scanf("%d" ,&idade);
		i=i+idade;
		np++;
	}
	while(np<=10);
	{
	printf("%.d");
	}
	mid=i/10;
	printf("a midia de idade do grupo e de: %.d",mid);
}
