#include<stdio.h>
#include<stdlib.h>

typedef struct saluno{
	char nome[100];
	int idade;
	char nota;
}aluno;


void verificandoanota(aluno ver){
	if(ver.nota=='A'||'B'||'C'||'a'||'b'||'c'){
		printf("aluno(a) %s APROVADO com consceito %c\n",ver.nome, ver.nota);
	}else if(ver.nota=='D'||'E'||'F'||'d'||'e'||'f'){
		printf("aluno(a) %s REPROVADO com consceito %c",ver.nome,ver.nota);
	}else{
		printf("nota invalida do aluno(a) %s",ver.nome);
	}	
}

int main(){
	
	int numdealunos;
	aluno *alunos;
	
	printf("numero de alunos:");
	scanf("%i",&numdealunos);
	alunos=(aluno*)calloc(numdealunos,sizeof(aluno));
	
	for(int i=0;i<numdealunos;i++){
		printf("\nnome aluno  %d:",(i+1));
		scanf("%s",&alunos[i].nome);
		fflush(stdin);
		printf("idade aluno %d:",(i+1));
		scanf("%i",&alunos[i].idade);
		fflush(stdin);
		printf("nota aluno  %d:",(i+1));
		scanf("%c",&alunos[i].nota);
		fflush(stdin);
	}
	
	for(int i;i<numdealunos;i++)
	verificandoanota(alunos[i]);
	
	return 0;
	}
