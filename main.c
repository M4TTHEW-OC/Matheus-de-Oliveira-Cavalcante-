#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int opcao, i;
for(i=0; i <4; i++){
printf("Selecione uma das opcoes a seguir: \n1. Soma n2. multiplacacao n3. divisao  n4. subtracao :");
scanf("%d", &opcao);

	switch(opcao){
		case '1':
			double soma1, soma2;
			printf("Selecione seu primeiro numero: ");
			scanf("%lf", &soma1);
			printf("Selecione seu segundo numero: ");
			scanf("%lf", &soma2);
			printf("Seu resultado foi: %.2lf\n", soma1 + soma2);
			break;
		case '2':
			double mult1, mult2;
			printf("Selecione seu primeiro numero: ");
			scanf("%lf", &mult1);
			printf("Selecione seu segundo numero: ");
			scanf("%lf", &mult2);
			printf("Seu resultado foi: %.2lf\n", mult1 * mult2);
			break;
		case '3':
			double div1, div2;
			printf("Digite o seu primeiro numero: ");
			scanf("%lf", &div1);
			printf("Digite o seu segundo numero: ");
			scanf("%lf", &div2);
			printf("Sua divisao é %lf\n", div1 / div2 );
			break;
		case '4':
			double sub1, sub2;
			printf("Selecione seu primeiro numero: ");
			scanf("%lf", &sub1);
			printf("Selecione seu segundo numero: ");
			scanf("%lf", &sub2);
			printf("Seu resultado foi: %.2lf\n", sub1 - sub2);
			break;
		default: printf("Numero Invalido\n");
	}	
}
	
	
	return 0;
}
