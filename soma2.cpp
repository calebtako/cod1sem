#include<stdio.h>
#include<stdlib.h>

float n1, n2, n3, soma;
main()
{
	printf("qual o primeiro valor ");
	scanf("%f" ,&n1);
	printf("qual o segundo valor ");
	scanf("%f" ,&n2);
	printf("qual o terceiro valor ");
	scanf("%f" ,&n3);
	soma=((n1*n1)+(n2*n2)+(n3*n3));
	printf("o valor da soma do quadrado deles e de  %.f" ,soma);
	return 0;
}
