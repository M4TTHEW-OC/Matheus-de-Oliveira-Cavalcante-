#include <stdio.h>
#include <math.h>
#define PI = 3.14159

int main(){
int opcao, i;
for(i=0; i <4; i++){
printf("Selecione uma das opcoes a seguir: \n1. Soma 2. Produto 3. Area do circulo 4. Bhaskara ----------> ");
scanf("%d", &opcao);

	switch(opcao){
		case 1:
			double soma1, soma2;
			printf("Selecione seu primeiro numero: ");
			scanf("%lf", &soma1);
			printf("Selecione seu segundo numero: ");
			scanf("%lf", &soma2);
			printf("Seu resultado foi: %.2lf\n", soma1 + soma2);
			break;
		case 2:
			double mult1, mult2;
			printf("Selecione seu primeiro numero: ");
			scanf("%lf", &mult1);
			printf("Selecione seu segundo numero: ");
			scanf("%lf", &mult2);
			printf("Seu resultado foi: %.2lf\n", mult1 * mult2);
			break;
		case 3:
			double r;
			printf("Digite o seu raio: ");
			scanf("%lf", &r);
			printf("Sua área é %lf\n", r * r * 3.14159265359);
			break;
		case 4:
			double a, b, c, delta;
			printf("Digite o a da equacao: ");
			scanf("%lf", &a);
			printf("Digite o b da equacao: ");
			scanf("%lf", &b);
			printf("Digite o c da equacao: ");
			scanf("%lf", &c);
	
			delta = pow(b, 2) - (4 * a * c);
	
			if(delta >= 0 && a != 0){ 
				printf("R1 = %.5lf \nR2 = %.5lf", (- b - sqrt(delta)) / (2 * a), (- b + sqrt(delta)) / (2 * a));}
				else printf("ERROR - Voce digitou algo errado!!!\n");
			break;
		default: printf("Numero Invalido\n");
	}	}	
