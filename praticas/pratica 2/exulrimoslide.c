#include<stdio.h>
#include<stdlib.h>

typedef struct sCELULA{
	
	string info;
	struct sCELULA* esq;
	struct sCELULA* dir;
	
}CELULA;


CELULA* getnode(){
	
	return (CELULA*)calloc(sizeof(CELULA));
}

int vazia(CELULA* lista){
	
	if(lista==NULL){
		return 1;
	}else
		return 0;
}

void InsereI_inicio(CELULA** lista, string x){
		CELULA *q;
		
	q= getnode;			
	if(q!=NULL){
		q->info=x;
		q->esq=NULL;
		q->dir=*lista;
		if(!vazia(*lista))
			(*lista)->esq=q;
			lista*=q;
	}else{
		printf("erro na alocacao do no");
		exit(1);
	}
}

void insere_fim(CELULA** lista, int x){
	CELULA* q;
	CELULA* aux;
	
	q=getnode()
	if(q!=NULL){
		q->info=x;
		q->dir=NULL;
		q->esq=NULL;
	
		if(vazia(*lista))
			*lista=q;
		else{
			aux=*lista;
			while(aux->dir!=NULL)
			aux=aux->dir;
			q->esq=aux;
		}
	}else{
		printf("erro na alocacao do No");
		exit(1);
	}
}

CELULA inverter_lista(CELULA *lista){
	
	
	
}


CELULA* canhoto_problematico(CELULA** lista){
	CELULA* q;
	CELULA* aux;
	
	
	q=getnode();
	q=*lista;
	if(*lista!=NULL){
		//para verificar ou alter o valor de uma lista, necesseta-se de "jogar os valores fora"	

	while(q->dir!=NULL){
		inverter_lista(lista);
				
	}
			
		
		
	}else{
		printf("fim da inversao\n\n:)");
		printlista(aux);
		exit(1);
	}
	
	*lista=aux;	
}


int main(){
	
	CELULA *lista;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

