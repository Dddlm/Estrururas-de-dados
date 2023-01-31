#include<stdio.h>
#include<stdlib.h>

typedef struct sdata{
	char nome[100];
	int dia;
	int mes;
	int ano;
	
}data;

void armazenadata(data *aluno){
	int i;
	for(i=0;i<2;i++ ){
		fflush(stdin);
		printf("\nO nome do aluno %:");
		scanf("%i",&aluno[i].nome);
		fflush(stdin);
		printf("\nAno de nascimento:");
		scanf("%i",&aluno[i].ano);
		fflush(stdin);
		printf("\nMes de nascimento:");
		scanf("%i",&aluno[i].mes);
		fflush(stdin);
		printf("\nDia de nascimento:");
		scanf("%i",&aluno[i].dia);
	}
	
}

void imprimedata(data *pessoa){
	int i;
	for(i=0;i<36;i++)
	printf("a data de nascimento de %s e %d/%d/%d/\n",pessoa[i].nome,pessoa[i].dia,pessoa[i].mes,pessoa[i].ano);
}

int main(){
	data *aluno=0;
	int i=0;
	
	aluno=(data*)calloc(36,sizeof(data));
	
	if(aluno==NULL){
		exit(1);
	}
	
	armazenadata(*aluno);
	imprimedata(*aluno);
	
	return 0;
}
