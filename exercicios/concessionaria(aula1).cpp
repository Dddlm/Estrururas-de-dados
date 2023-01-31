#include<stdio.h>
#include<stdlib.h>

typedef struct Scarro{
	
	char modelo[50];
	int ano;
	char marca[50];
	
}carro; 

int main(){

	int numcarros;
	carro *concessionaria=0;
	char a;
		printf("digite o numero de carros: ");
		scanf("%d",&numcarros);
		concessionaria=(carro*)malloc(numcarros*sizeof(concessionaria));

	
	for(int i=0;i<numcarros;i++){
		printf("modelo carro %d:",(i+1));
		scanf("%s",&concessionaria[i].modelo);
		fflush(stdin);		
		printf("ano carro %d:",(i+1));
		scanf("%i",&concessionaria[i].ano);	
		fflush(stdin);
		printf("marca carro %d:",(i+1));
		scanf("%s",&concessionaria[i].marca);		
		fflush(stdin);
	}

	free(concessionaria);
	
	return 0;
}
