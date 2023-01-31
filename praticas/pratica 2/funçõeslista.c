#include<stdio.h>
#include<stdlib.h>

typedef struct sCELULA{
	
	int info;
	struct sCELULA *prox;
	
}CELULA;
/*
CELULA init(CELULA *lista){
	
	lista=NULL;
	return lista;
}
*/
CELULA getnode(CELULA *lista){
	
	return (CELULA*)malloc(sizeof(CELULA));
}

int vazia(CELULA *lista){
	if(lista==NULL)
		return 1;
	return 0;	
}

CELULA inserir_inicio(CELULA *lista,int num){
	CELULA *aux;
	CELULA *aux2;
	
	aux=getnode();
	if(aux==NULL){
		aux->info=num;
		aux2=lista;
		aux->prox=aux2;
		lista=aux;
		return lista;
	}else{
	printf("erro na alocacao");
		return NULL;
	}
}

CELULA inserir_fim(CELULA *lista,int num){
	CELULA *aux;
	
	
	aux=lista;
	while(aux!=NULL){
		aux=aux->prox;
	}
	aux->prox=num;
	lista=aux;
	return lista;
}



