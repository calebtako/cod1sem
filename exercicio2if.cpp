#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char nome[3];
voidmain()
{
	printf("voce acha que logica eh dificil (sim ou nao) \n");
	scanf("%s" ,&nome);
	if (nome=="sim")
	{
		printf("estude mais entao caneco %.s\n");
	}
	if(nome=="nao")
	{
		printf("concordo com voce %.s\n");
	}
	return 0;
}

