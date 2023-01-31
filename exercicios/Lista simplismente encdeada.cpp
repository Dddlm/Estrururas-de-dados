#include<stdio.h>
#include<stdlib.h>

typedef struct scelula{
	
	int info;
	struct scelula *netx;
	
}celula;

celula* getnode(){
	return (celula*)malloc(sizeof(celula));
}

celula* init(celula *lista){
	lista=NULL;
	return lista;
}

int vazia(celula *lista){
	if(lista==NULL){
		printf("lista vazia :(\n");
		return 1;
	}else
		return 0;
	
}

celula inserirInicio(celula* lista,int x){
	celula *aux;
	celula *q;
	aux=getnode();
	q=init(q);
	
	q->info=x;
	q->netx=NULL;
	
	aux=lista;
	if(aux==NULL){
		aux=q;
		return *aux;
	}
	
	
	
}



void imprimirValores(celula *lista){
	celula *aux;
	
	aux=lista;
	
	while(aux!=NULL){
		printf("\t%d\n",aux->info);
		aux=aux->netx;
	}
	
}


int main(){
	
	celula *listasimp;
	listasimp=getnode();
	
	vazia(listasimp);
	
	inserirInicio(listasimp,10);
//	inserirInicio(listasimp,11);
//	inserirInicio(listasimp,12);
	imprimirValores(listasimp);
	
	
	free(listasimp);
	return 0;
}
