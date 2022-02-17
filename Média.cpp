/* Leia os doi valores de dois pontos flutuantes de presição de A e B correspondentes ás notas de dois alunos .Após isso, calcule a média do aluno,considerando
que a nota A tem peso 3,5 e B tem peso 7,5 .Cada noto pode ser de zero a dez , sempre com um dígito depois após da virgula .Não se esqueça de imprimir o final da linha
apóso resultado, caso contrário você receberá "Erro de apresentação ".Não se esqueça do espaço antes e depois do sinal de igual. ?*/

#include <stdio.h>
#define P1 3.5 
#define P2 7.5
int main(){
	float n1a, n2a, amedia, n1b, n2b, bmedia;
	
	printf("Digite a Nota A do primeiro Aluno: ");
	scanf("%f", &n1a);
	
	printf("Digite a Nota B do primeiro Aluno: ");
	scanf("%f", &n2a);
	
	amedia = (n1a * P1 + n2a * P2) /11 ;
	 
	 printf("Digite a Nota A do segundo Aluno: ");
	scanf("%f", &n1a);
	
	printf("Digite a Nota B do segundo Aluno: ");
	scanf("%f", &n2a);
	
	bmedia = (n1a * P1 + n2a * P2) /11 ;
	 printf("A media do aluno A e: %f\n", amedia);
	 
	 printf("A media do aluno B e: %f", bmedia);
}
