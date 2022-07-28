#include<stdio.h>
#include<stdlib.h>
float nat, dig=20;
main()
{
	printf("numeros");
	scanf("%f" ,&nat);
	for(nat=0; nat>=999999999; nat= nat+dig);
	{
		printf("%.6f" ,nat);
	}
	return 0;
}
