#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n;
main()
{
	for (n=10; n<=200; n++)
	{
		if (n%2==0)
		{
			printf("\n %.d",n);
		}
	}
	return 0;
}
