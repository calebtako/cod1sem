#include<stdio.h>
#include<stdlib.h>
float idade;
main()
{
	printf("quantos voce tem \n");
	scanf("%f" ,&idade);
	if(idade>=18)
	{
		printf("parabens voce pode dirigir");
	}
	else 
	{
		printf("que pena n perca seu tempo pedindo para dirigir o carro dos outros");
	}
	return 0;
}
