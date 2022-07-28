#include<stdio.h>
#include<stdlib.h>
int n1, n2, n3;
main()
{
	printf("digite um numero \n");
	scanf("%d",&n1);
	printf("digite outro numero por favor \n");
	scanf("%d" ,&n2);
	printf("digite so mais um numero \n");
	scanf("%d" ,&n3);
	if (n1<n2 && n2>n3)
	{
		printf("o segundo numero e o maior %.d");
	}
	if (n2<n1 && n1>n3)
	{
		printf("o primeiro numero e o maior %.d");
	}
	if (n1<n3 && n3>n2)
	{
		printf("o terceiro e o maior %.d");
	}
	return 0;
}
