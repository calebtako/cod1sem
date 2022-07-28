#include<stdio.h>
#include<stdlib.h>

float n1, n2, n3;
main()
{
	printf("digite um numero \n");
	scanf("%f" ,&n1);
	printf("digite o segundo numero \n");
	scanf("%f" ,&n2);
	printf("digite so mais um numero \n");
	scanf("%f" ,&n3);
	if (n1==n2 && n1>n3)
	{
		printf("cansei de conta");
	}
	if(n2==n3&&n2>n1)
	{
		printf("ai se me mata mu querido");
	}
	if(n3>n2&&n3>n1)
	{
		printf("caramba man se quer msm que eu te fale");
	}
	if(n3==n2&&n3<n1)
	{
		printf("caneco cara voce nao sabe faze sosinho nao");
	}
	if(n1==n3&&n1>n2)
	{
		printf("cara e so olha pelo amor");
	}
	if(n3==n1&&n3>n2)
	{
		printf("que tal eu descansa e voce pensa um pouco em");
	}
	if(n1==n3&&n1<n2)
	{
		printf("vai estuda desgrasa");
	}
	
	return 0;
}

