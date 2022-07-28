#include<stdio.h>
#include<stdlib.h>
float not1,not2,not3,not4,media;
main()
{
	printf("qual a primeira nota do aluno ");
	scanf("%f" ,&not1);
	printf("qual a segunda nota do aluno ");
	scanf("%f" ,&not2);
	printf("qual a terceira nota do aluno ");
	scanf("%f" ,&not3);
	printf("qual a quarta nota do aluno ");
	scanf("%f" ,&not4);
	media=(not1+not2+not3+not4)/4;
	printf("a media do aluno eh de %.f" ,media);
	return 0;
}
