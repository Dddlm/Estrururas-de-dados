#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int dia,ano;
	char mes[10];
}data;
void ler(data d)
{
	scanf("%d",&d.dia);
	scanf("%s",d.mes);
	scanf("%d",&d.ano);
}
void imprimir(data d)
{
	printf("%d/",d.dia);
	printf("%s/",d.mes);
	printf("%d",d.ano);
}
int main()
{
	data d;
	ler(d);
	imprimir(d);	
}
