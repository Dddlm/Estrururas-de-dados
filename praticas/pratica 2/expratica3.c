#include<stdio.h>
#include<stdlib.h>

typedef struct sCELULA{
	
	int no;
	struct sCELULA *next;
	
}CELULA;

CELULA* getnode(){
	
	return(CELULA*)malloc(sizeof(CELULA));
}

CELULA* ini(CELULA* lista){
	
	lista=NULL;
	
	return lista;
}

int vazia(CELULA* lista){
	
	if(lista==NULL){
		return 1;
	}else
	return 0;
}

CELULA* insere_inicio(CELULA* lista,int x){
	
	CELULA *aux;
	aux=lista;
	if(aux!=NULL){
		aux->no=x;
		aux->next=lista;
		lista=aux;
		return lista;
	}
	else {
		printf("\nerro na alocacao do no.\n");
		return NULL;
	}	
}

CELULA* insere_fim(CELULA* lista,int x){
	CELULA* aux;
	CELULA* aux2;
	
	aux=getnode();
	if(aux!=NULL){
		aux->no=x;
		aux->next=NULL;
	
		if(vazia(lista))
		lista=aux;
	}else 
	aux=lista;
	while(aux2->next!=NULL){
		
		aux2=aux2->next;

	aux2->next=aux;
	}
	return lista;
	
}

void exibe_lista(CELULA* lista){
	CELULA *aux;
	
	aux=lista;
	while(aux!=NULL){
		printf("%d\t,",aux->no);
		aux=aux->next;	
	}
	printf("\n");
}

CELULA* pesquisa(CELULA* lista, int x){
	CELULA* aux;
	if (!vazia(lista)){
		aux=lista;
		while(aux!=NULL){
		if(aux->no==x);
			aux=aux->next;
			return aux;
		}
	
		
	}
	return NULL;
	
}

CELULA* remove_inicio(CELULA* lista){
CELULA* aux;

aux=lista;
if(!vazia(lista)){//lista tem nós
	lista=aux->next;
	free(aux);
	return lista;
}else {
	printf("\nERRO: lista vazia");
	return lista;
}

}

CELULA* remove_valore_especifico(CELULA* lista,int x){
	CELULA* aux;
	CELULA* aux2;
	
	if((aux=pesquisa(lista,x))!=NULL){
		
		aux2=lista;
		if(aux2==aux)//nó no inicio da lista
		remove_inicio(lista);
	}else{
	while(aux2->next!=aux)
		aux2=aux2->next;
		aux2->next=aux->next;
		free(aux);
	}
	return lista;	
}

int main(){
	int code=0;
	
//	while()
	
	
	
	return 0;
}
