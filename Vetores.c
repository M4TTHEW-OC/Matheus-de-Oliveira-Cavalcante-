#include <stdio.h>
#include <stdlib.h>
                                                
/*   EST. Dados Homogênias  
            |                  _______       		|                                   
            |                 |      |       		|    Vetores ([])        printf("%d", notas[1]);
Variasveis <-  [//][-][][][//][//]   | (1.5)     	|                                10   5   0   3  10
                              _______|            	|     int notas [5] ----------> [//][//][//][//][//][][][]
						     |                    	|                                0   1   2   3   4 <--- índices
						 | __|___    [int nota;}    |	  [índices] "Inportante"  (TAM-1)
   [NOME]                | |    |            		|        						início em ø;
   [TIPO]:   int, char,floot,double;         		|
   [VALOR]											|     notas [4] = 10; 

   
int main() {
	
	float media, notas[5];
	
	printf("Digite a nota do primeiro aluno:");
	scanf("%f", &notas[0]);
	printf("Digite a nota do segundo aluno:");
	scanf("%f", &notas[1]);
	printf("Digite a nota do treceiro aluno:");
	scanf("%f", &notas[2]);
	printf("Digite a nota do quarto aluno:");
	scanf("%f", &notas[3]);
	printf("Digite a nota do quinto aluno:");
	scanf("%f", &notas[4]);
	
	media = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4]) / 5;
	printf("A media da turma foi de %f", media);
	
	
	return 0;
}
*/
#include <stdio.h>
 
int main() {
	float notas[5], media,soma=0;
	int i=0;
 
	for(i=0;i<5;i++){
		printf("Informe a n%d: ",i+1);
		scanf("%f",&notas[i]);
		soma = soma + notas[i];
	}
 
	media = soma/5;
 
	printf("Media das notas: %.2f\n",media);
 
	//Notas informadas: 
	printf("Notas informadas: \n");
	for(i=0;i<5;i++){
		printf("n%d: %.2f\n",i+1,notas[i]);
	}	
 
	printf("Notas informadas(invertidas): \n");
	for(i=4;i>=0;i--){
		printf("n%d: %.2f\n",i+1,notas[i]);
	}	
 
 
	return 0;
}













