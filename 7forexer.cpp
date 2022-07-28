#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int a,i,cont=0;	
	printf("Digite um numero: ");
	scanf("%d",&a);
	for(i=a;i>0;i--) 
 if(a%i==0) 	
 cont++;	
if (cont==2) 
 printf("O numero e primo");	
else 
 printf("O numero nao e primo");
 return 0;
}
