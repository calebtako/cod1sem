#include<stdio.h>
#include<stdlib.h>
float dias, pagamento;
main()
{
	printf("quantos dias ele trabalhou \n");
	scanf("%f" ,&dias);
	pagamento=((dias*30)*0.92);
	printf("ele recebeu %.2f" ,pagamento);
	return 0;
}
