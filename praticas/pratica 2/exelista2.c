#include<stdio.h>
#include<stdlib.h>

typedef struct sCELULA{
	
	int info;
	struct sCELULA *next;
	
}CELULA;


CELULA init(CELULA *lista){
	
	lista=NULL;
	
	return lista;
}


CELULA getnode(){
	
return (CELULA*)malloc(sizeof (CELULA));	
	
}

int vazia(CELULA *lista){
	
	if(lista==NULL)
		return 1;
	return 0;	
}


CELULA insere_fim(CELULA *lista, int x){
	CELULA q;
	CELULA aux;
	
	q=getnode();
	if(q!=NULL){
		q->info=x;
		q->next=NULL;
		
		if(vazia(lista))
			lista=q;
		else{
			aux=lista;
			while(aux->next!=NULL){
				aux=aux->next;
			
				aux->next=q;	
			}
			return lista;
		}
	else{
		printf("\ERRO na alocacao do no");
		return NULL;			
	}		
	}
}

CELULA 



int main(){
	
	
	
	
	
	
	
	
	return 0;
}




