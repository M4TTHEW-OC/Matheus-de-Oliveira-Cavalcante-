# linguegem-C
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop 

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	struct estudante {
		int matricula;
		char nome [200];
		float media;
	};
	
	struct estudante estudante1, estudante2;
	estudante1.matricula  = 987;
	strcpy(estudante1.nome,"Diego Rodrigues");
	estudante1.media = 98.5;
	
	estudante2.matricula  = 456;
	printf (">>>%s\n", estudante1.nome);
	printf (">>>%d\n", estudante2.matricula);
	printf (">>>%.2f\n", estudante1.media);
	printf (">>>%d\n", estudante2.matricula);
	return 0;
}*/


/* Elabore um programa que receba matricula, nome e 4 notas de 10 alunos e imprima na tela a matricula,
 nome, n1, n2, n3, n4 e media das notas, ao finl imprima a media das notas, ao final imprima  
 a media das notas de todos os alunos (media das medias);*/
int main() {
	setlocale(LC_ALL,"portuguese");
	int i,j;
	
	struct Estudante {
		int matricula;
		char nome [200];
		float media, nota[4];
	};
	struct Estudante estudante[3];
	
	for(i=0;i<3;i++){
		estudante[i];
		printf("Digite a matricula do %d° aluno: ", i+1);	
		scanf("%d", &estudante[i].matricula);
		printf("Digite o nome do %d° aluno: ", i+1);	
		scanf("%s", &estudante[i].nome);
		fflush(stdin);
			for(j=0;j<4;j++){
				printf("Digite a %d°nota do %d°aluno: ", i+1, i+1);	
				scanf("%d", &estudante[i].nota[j]);
			}
	}
    for(i=0;i<3;i++){
		estudante[i];
		printf("Matricula do %d° aluno é %d \n", i+1, estudante[i].matricula);	
		printf("Nome do %d° aluno é %s \n", i+1, estudante[i].nome);
			for(j=0;j<4;j++){
				printf("%d° nota do %d° aluno é %s \n", i+1, i++, estudante[i].nota);
			}
	}
	return 0; 
}

/* Algoritmo e programação em linguagem C pegar na biblioteca 
					
	   
	   				int notas[50];
	   				estudantes  std[500];
	   				    |__________|
	   ___________
	  |			 |
	float notas [5]	|			[3] Elementos
		|			|	 cod.
	Homogênia		|	 Nome.
____________________|	 media[.]
					|
	Heterogênia		| 		  ->
			nome	 /cod	 /[media]
	[aluno]	-[//][//]/[//][//]/[//][//][//]
			-[  ][  ]/[  ][  ]/[  ][  ][  ]
			int main() {
	
	*/ 
