#include<stdio.h>
#include<stdlib.h>


int multiplica(int a, int b){
	
	return a*b;
}

int divide(int a, int b){
	
	return a/b;	
}
int soma(int a, int b){
	
	return a+b;
}
int subtrai(int a, int b){
	
	return a-b;
}


int main(){
	
	int code=-1;
	int a=0;
	int b=0;
	int result=0;
	int v;
	
	FILE*arq;
	
	if (!(arq=fopen("C:\\Users\\diego\\Documents\\exercicios arquivo\\calculadora.txt","a")))  
  	{                     
  		printf("Erro! Impossivel abrir o arquivo!\n");
  		exit(1);
  	}
	
	
	while(code!=0){
		
	printf("\ninsira os numeros a serem utilizados:\n");
	scanf("%d %d",&a,&b);
	
	printf("escolha uma das op??es abaixo\n");
	printf("1:soma\n");
	printf("2:multiplica\n");
	printf("3:divide\n");
	printf("4:subtrai\n");
	printf("0:sai do programa\n");
	scanf("%d",&code);
	
	
	switch(code) {
	
	
	case 1:
		printf("\nO resultado e:%d\n",soma(a,b));
		fprintf (arq,"%d\n",soma(a,b));
		break;
		
	case 2:
		printf("\nO resultado e:%d\n",multiplica(a,b));;
		fprintf (arq,"%d\n",multiplica(a,b));
		break;
		
	case 3:
		printf("\nO resultado e:%d\n",divide(a,b));
		fprintf (arq,"%d\n",divide(a,b));
		break;
		
	case 4:
		printf("\nO resultado e:%d\n",subtrai(a,b));
		fprintf (arq,"%d\n",subtrai(a,b));
		break;
	
	
	}
	}
	
	
	fclose(arq);
	return 0;
}
