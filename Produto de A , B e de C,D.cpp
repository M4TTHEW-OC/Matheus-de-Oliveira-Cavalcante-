/*Leia quatro valores inteiros chamados A, B, C e D. Calcule e imprima a diferença do produto A e B pelo produto de C e D (A * B - C * D).*/

#include<stdio.h>

int main(){
    
	
int  a, b, c, d, diferenca, produto1, produto2;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	printf("Digite o valor de D: ");
	scanf("%d", &d);
	
	produto1 = a * b;
	
	produto2 = c * d;
	
	diferenca = produto1 - produto2;
	
	printf("A diferença entre os produtos e de: %d ", diferenca);
	
	
}
