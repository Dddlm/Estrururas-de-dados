#include<stdio.h>
#include<stdlib.h>

typedef struct sdata{
	int dia;
	char mes[20];
	int ano;
	
}data;

int veragosto(data *aluno,int numalunos){
	int x=0,i=0;
	for(i=0;i<numalunos;i++)
		if(aluno[i].mes=="agosto"){
		x++;
		}
	
	return x;
}

void armazenadata(data *aluno){
	int i;
	for(i=0;i<2;i++ ){
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
	printf("a data de nascimento e %d/%d/%d/\n",pessoa[i].dia,pessoa[i].mes,pessoa[i].ano);
}

int main(){
	int numalunos=0;
	data *alunos;
	
	alunos=(data*)malloc(numalunos*sizeof(data));
	if(alunos==NULL){
		exit(1);
	}
	
	armazenadata(*alunos);
	imprimedata(*alunos);
	
	return 0;
}
