#include <stdio.h>
#include <stdlib.h>
main ()
{
    int x,y,i,fat;
    i=1;
    fat=1; 
    do
    {
    printf ("\nDigite um numero inteiro maior que 0.\n");
    scanf ("%d",&x);
    }
	while (x<=0);
    printf ("\nDigite a potencia.\n\n");
    scanf ("%d",&y);
    if (y<0)
    {
        printf ("\nPotencia de numero negativo.\n\nNao foi efetuado calculo.\n\n");
    }
    if (y==0)
    {
        printf ("\nO numero %d elevado a %d, e igual a 1.\n\n",x,y);
    }
    else
    {
        printf ("\n");
        do
        {
            fat=fat*x;
            printf ("%d\t",fat);
            i++;
        }while (i<=y);
    }
    if (y>=0)
    {
    printf ("\nO numero %d elevado a %d, e igual a %d.\n\n",x,y,fat);
    }
}
