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
