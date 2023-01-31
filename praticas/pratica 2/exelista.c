#include<stdio.h>
#include<stdlib.h>

typedef struct sCELULA{
	
	int info;
	struct sCELULA *next;
	
}CELULA;


CELULA init(CELULA *lista){
	
	lista=NULL;
	
	return *lista;
}


CELULA getnode(){
	
return (CELULA*)malloc(sizeof (CELULA));	
	
}

int vazia(CELULA *lista){
	
	if(lista==NULL)
		return 1;
	return 0;	
}

CELULA inserer_inicio(CELULA *lista,int x){
	CELULA q;
	
	q=getnode();
	if(q!=NULL){
		q->info=x;
		q->next=lista
		return lista;
	}else{
		printf("\nERRO na alocacao do no");
		return NULL;
	}

}


CELULA exibir_lista(CELULA *lista){
	CELULA aux;
	while(lista->next!=NULL){
		printf("%d\t",lista->info);
		lista=lista->next;
	}
	printf("\n");
	
	return lista;
}

int main(){
	
	CELULA *lista;
	lista=init(*lista);
	char vet[5]{l,a,b,s,o};
	
	for(int i;i>10;i++)
	lista=inserer_inicio(lista,vet[i]);
	
	exibir_lista(lista);
	
	return 0;
}
