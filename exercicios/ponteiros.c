#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a=5;
	int *ptr=0;
		
	ptr=&a;	//o conteudo da variavel a foi salvo no poteiro 
	
	printf("o numero salvo foi %i",*ptr);//para printar o  conteudo do ponteiro se usa o *
	
	return 0;
}
