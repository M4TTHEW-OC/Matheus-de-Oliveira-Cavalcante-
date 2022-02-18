/*Leia 4 valores inteiros A, B, C, e D.  A seguir, se B for maios do que C e se D for maior que a soma de A e B e se C e D, ambos
forem positivos e se a variável    A for par escreva a mensagem "valores aceitos", se não escreva "valores não aceitos". */

#include<stdio.h>

int main (){
	
	int a, b, c, d;
	
	
	printf("Informe o valor de A:");
	scanf("%d", &a);
	printf("Informe o valor de B:"); 
	scanf("%d", &b);
	printf("Informe o valor de C:");
	scanf("%d", &c);
	printf("Informe o valor de D:");
	scanf("%d", &d);
	
	if (b > c && d > a && c + d > a + b && d >= 0 && c >= 0 && a%2 == 0) // && e para possibilitar varios calculos em um if sendo E  
	printf("Valores aceitos");
	else printf("Valores nao aceitos");
	
	
	
	
	
}
