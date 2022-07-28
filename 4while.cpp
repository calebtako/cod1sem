#include<stdio.h>
#include<stdlib.h>
int numalu, n1, media, lin=1;
float soma=0.0;

main()
{
	printf("quantos alunos tem em sua sala \n");
	scanf("%d",&numalu);
	while(lin<=numalu)
	{
		printf("quanto o aluno tiro na primeira avaliacao");
		scanf("%d",&n1);
	    
		soma = soma +n1;
		
		lin++;	
	}
	printf("a media da turma e de %.1f" ,soma/numalu);
	return 0;
}
