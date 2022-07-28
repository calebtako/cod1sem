#include<stdio.h>
#include<stdlib.h>
float dias, valor, ju, ja,ji, diario;
main()
{
	printf("qualnto foi posto \n");
	scanf("%f" ,&valor);
	printf("quanto tempo ficara aplicado \n");
	scanf("%f" ,&dias);
	ju=(120/100);
	ja=(ju/360);
	diario=(ja*dias);
	ji=valor+(valor*diario);
	printf("o valor total depois desse tempo sera de %.f" ,ji);
	return 0;
	
}
