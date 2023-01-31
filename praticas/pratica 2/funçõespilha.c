#include<stdio.h>
#include<stdli.h>
#define TAMMAX 10


typedef struct spilha{
	
	int info[TAMMAX];
	int topo;
	
}pilha;


void init(CELULA *pilha){
	
pilha->topo=-1;

}

int cheia(CELULA *pilha){
	if(topo+1==TAMMAX)
		return 1;	
	return 0;

}

CELULA vazia(){
	if(pilha->topo==-1)
		return 1;
	return 0;
}

void push(CELULA *pilha,int val){
	if(cheia(pilha)){
		printf("ERRO\n\n lista cheia");
		return;
	}else{
		++pilha->topo;
		pilha->info=[pilha->topo]=val;
	}
}

void pop(CELULA *pilha){
	int aux;
	if(vazia(pilha)){
		printf("ERRO a pilha esta vazia");
		return -1;
	}else{
		aux=pilha->info[pilha->topo];
		pilha->topo--;
		return aux;
	}
}

int retorna_topo(CELULA *pilha){
	if(vazia(pilha)){
		printf("ERRO a pilha esta vazia");
		return -1;
	}
	return pilha->info[pilha->topo];
}


