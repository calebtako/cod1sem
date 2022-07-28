#include<stdio.h>
#include<stdlib.h>
float n1;
main()
{
	printf("digite um numero");
	scanf("%f" ,&n1);
	for (n1=0; n1<=10; n1=n1+0.5)
	{
		printf("%.f \n",n1);
	}
	

}
