#include<stdio.h>
#include<stdlib.h>

float saldo, mes, total;
main()
{
	printf("qualto foi depositado \n");
	scanf("%f" ,&saldo);
	printf("qualtos meses ficou aplicado \n");
	scanf("%f" ,&mes);
	total=(((0.35*mes)*saldo)+saldo);
	printf("o saldo pos esse tempo e de %.f" ,total);
	return 0;
	
}
