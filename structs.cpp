#include <stdio.h>
 
#define TAMAMANHO 100
 
int main() {
 
	float soma,media,soma_media_geral=0;
	int i = 0;
 
	struct Estudante{
		char matricula[50];
		char nome[100];
		float notas[4];	
	};
 
	struct Estudante estudante[TAMAMANHO];
 
	for(i=0;i<TAMAMANHO;i++){
		fflush(stdin);
		printf("Informe a matricula do %do estudante: ",i+1);
		scanf("%s",&estudante[i].matricula);
 
		fflush(stdin);
		printf("Informe o nome do %do estudante: ",i+1);
		scanf("%[^\n]s",&estudante[i].nome);
 
		printf("Informe a nota 1: ");
		scanf("%f",&estudante[i].notas[0]);
		printf("Informe a nota 2: ");
		scanf("%f",&estudante[i].notas[1]);
		printf("Informe a nota 3: ");
		scanf("%f",&estudante[i].notas[2]);
		printf("Informe a nota 4: ");
		scanf("%f",&estudante[i].notas[3]);
	}
 
	printf("-------------------------------------\n");
	for(i=0;i<TAMAMANHO;i++){	
		printf("Matricula: %s \n",estudante[i].matricula);
		printf("Nome: %s \n",estudante[i].nome);
		printf("N1: %.1f \n", estudante[i].notas[0]);
		printf("N2: %.1f \n", estudante[i].notas[1]);
		printf("N3: %.1f \n", estudante[i].notas[2]);
		printf("N4: %.1f \n", estudante[i].notas[3]);
		soma = estudante[i].notas[0] + estudante[i].notas[1] + estudante[i].notas[2] + estudante[i].notas[3];
		media = soma/4;
		soma_media_geral = soma_media_geral + media;
		printf("Media: %.1f \n",media);
		printf("-------------------------------------\n");
	}
 
	printf("soma_media_geral: %.1f\n",soma_media_geral);
	printf("Media geral: %.1f",soma_media_geral/TAMAMANHO);
 
	return 0;
}
 
 
 
 
//#include <stdio.h>
//
//int main() {
//	
//	float soma;
//	
//	struct Estudante{
//		char matricula[50];
//		char nome[100];
//		float notas[4];	
//	};
//	
//	struct Estudante estudante[10];
//	
//	fflush(stdin);
//	printf("Informe a matricula: ");
//	scanf("%s",&estudante[0].matricula);
//	
//	fflush(stdin);
//	printf("Informe o nome: ");
//	scanf("%[^\n]s",&estudante[0].nome);
//	
//	printf("Informe a nota 1: ");
//	scanf("%f",&estudante[0].notas[0]);
//	printf("Informe a nota 2: ");
//	scanf("%f",&estudante[0].notas[1]);
//	printf("Informe a nota 3: ");
//	scanf("%f",&estudante[0].notas[2]);
//	printf("Informe a nota 4: ");
//	scanf("%f",&estudante[0].notas[3]);
//	
//	printf("Matricula: %s \n",estudante[0].matricula);
//	printf("Nome: %s \n",estudante[0].nome);
//	printf("N1: %.1f \n", estudante[0].notas[0]);
//	printf("N2: %.1f \n", estudante[0].notas[1]);
//	printf("N3: %.1f \n", estudante[0].notas[2]);
//	printf("N4: %.1f \n", estudante[0].notas[3]);
//	soma = estudante[0].notas[0] + estudante[0].notas[1] + estudante[0].notas[2] + estudante[0].notas[3];
//	printf("Media: %.1f \n",soma/4);
//	
//	return 0;
//}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
/*
Elabore um programa que receba matricula, 
nome e 4 notas de 10 estudantes
 
imprima na tela a matricula, 
nome, n1, n2, n3, n4 e media das notas, 
 
ao final imprima a média das notas de todos alunos 
(média das médias)
 
 
 
 
 
#include <stdio.h>
#include <string.h>
 
int main() {
    
    struct Estudante {
        int matricula;
        char nome[200];
        float media;
    };
    
    struct Estudante estudante[3];
    
    estudante[0].matricula = 987;
    strcpy(estudante[0].nome,"Diego Rodrigues");
    estudante[0].media = 98.8;
    
    printf(">>> %s\n", estudante[0].nome);
    printf(">>> %d\n", estudante[0].matricula);
    printf(">>> %.1f\n", estudante[0].media);
    printf("--------------------\n");
 
    return 0;
}
 
 
*/
