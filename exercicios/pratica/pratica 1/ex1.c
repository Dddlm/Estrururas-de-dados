#include<stdio.h>
#include<stdlib.h>

typedef struct sdata{
	int dia;
	char mes[15];
	int ano;
	
}data;

void imprimedata(data pessoa){
	printf("O ano de seu nascimento e: %i\n",pessoa.ano);
	printf("O mes de seu nascimento e: %s\n",pessoa.mes);
	printf("O dia de seu nascimento e: %i\n",pessoa.dia);
}

int main(){
	data pessoa;
	
	fflush(stdin);
	printf("\nAno de nascimento:");
	scanf("%i",&pessoa.ano);
	
	fflush(stdin);
	printf("\nMes de nascimento:");
	scanf("%i",&pessoa.mes);
	
	fflush(stdin);
	printf("\nDia de nascimento:");
	scanf("%i",&pessoa.dia);
	
	
	imprimedata(pessoa);
	
	return 0;
}
