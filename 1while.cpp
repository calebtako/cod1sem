#include<stdio.h>
#include<stdlib.h>
int n;
main()
{
	while (n<=100)
	{
		if (n%2==1)
		{
			printf("\t %.d" ,n);
		}
		n++;
	}
	return 0;
}

