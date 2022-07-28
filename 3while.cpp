#include<stdio.h>
#include<stdlib.h>
int n, ni=1,np;
main()
{
	
	printf("digite um numero");
	scanf("%d",&n);
    printf("pares \t impares \n");
	while(ni<=n)
	{
		if(ni%2==0)
		{
		printf(" \n %.d",ni);
		}
		else
		{
		printf("\t %.d",ni);
		}
		ni++;
	}
	return 0;
}
