#include<stdio.h>
#include<stdlib.h>
float gas, vel, tem, dis;
main()
{
	printf("qual a veelocidade media que vc fez no caminho \n");
	scanf("%f" ,&vel);
	printf("qual o tempo gasto na viajem");
	scanf("%f" ,&tem);
	dis=(tem*vel);
	gas=dis/12;
	printf("a distancia percorrida foi de %.f" ,dis);
	printf("e a gasolina gasta foi de %.f" ,gas);
	return 0;
}
