#include<stdio.h>
#include<stdlib.h>

typedef struct sendereco{
	int num;
	char rua[30];
	char bairro[30];
	
}endereco;

typedef struct sdata{
	char nome[100];
	int dia;
	int mes;
	int ano;
	
}data;

typedef struct scliente{
	char nome[30];
	data nascimento;
	endereco residencial;
	
}cliente;

int main(){
	int clientes=100,i;
	cliente *empresa;
	
	empresa=(cliente*)calloc(clientes,sizeof(cliente));
	if(cliente==NULL){
		exit(1);
	}
	
	for(i=0;i<clientes;i++)
	
	
	return 0;
}


