/* Leia os doi valores de dois pontos flutuantes de presi��o de A e B correspondentes �s notas de dois alunos .Ap�s isso, calcule a m�dia do aluno,considerando
que a nota A tem peso 3,5 e B tem peso 7,5 .Cada noto pode ser de zero a dez , sempre com um d�gito depois ap�s da virgula .N�o se esque�a de imprimir o final da linha
ap�so resultado, caso contr�rio voc� receber� "Erro de apresenta��o ".N�o se esque�a do espa�o antes e depois do sinal de igual.*/

#include <stdio.h>
int main(){
	float n1a, n2a, amedia, n1b, n2b, bmedia;
	
	printf("Digite a Nota A do primeiro Aluno: ");
	scanf("%f", &n1a);
	
	printf("Digite a Nota B do primeiro Aluno: ");
	scanf("%f", &n2a);
	
	amedia = (n1a * 3.5 + n2a * 7.5) /2 ;
	 
	 printf("Digite a Nota A do segundo Aluno: ");
	scanf("%f", &n1a);
	
	printf("Digite a Nota B do segundo Aluno: ");
	scanf("%f", &n2a);
	
	bmedia = (n1a * 3.5 + n2a * 7.5) /2 ;
	 printf("A media do aluno A e: %f\n", &amedia);
	 
	 printf("A media do aluno B e: %f", &bmedia);
}
