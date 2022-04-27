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

/*
#include <stdio.h>
 
 
void head(); // 2 - protótipo do procedimento
float soma(float n1, float num2); // 2 - protótipo da função
char le_valida_operador();
 
int main() {
 
	float n1,n2,result;
	char op;
 
	head(); // 3 - chamada do procedimento
 
	printf("N1: ");
	scanf("%f",&n1);
 
	printf("OP:");
	op = le_valida_operador();
 
	printf("N2: ");
	scanf("%f",&n2);
 
	printf("---------------\n");
 
	switch(op){
		case '+':
			result = soma(n1,n2);
			printf("RESULTADO:   %.1f\n",result); // 3 - chamada da função soma()
		break;
		case '-':
			printf("RESULTADO:   %.1f\n",n1-n2);
		break;
		case '*':
			printf("RESULTADO:   %.1f\n",n1*n2);
		break;
		case '/':
			printf("RESULTADO:   %.1f\n",n1/n2);
		break;						
 
		default:
			printf("OPERADOR INVALIDO");
 
	}
 
	return 0;
}
 
// 1 - declaração do procedimento
void head(){
	printf("---------------\n");
	printf("CALC\n");
	printf("---------------\n");	
}
 
// 1 - declaração da função
float soma(float n1, float num2){
	float resultado;
	resultado = n1 + num2;
	return resultado;
}
 
 
char le_valida_operador(){
	char operador;
	int cont=0;
	do{
		if(cont!=0){
			printf("-------\nERRO\n-------\n");
		}
		scanf(" %c",&operador);	
		cont++;
	}while(operador!='+' && operador!='-' && operador!='*' && operador!='/');	
 
	return operador;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
// https://pastebin.com/akbWN6si
/*
#include <stdio.h>
 
int main() {
 
	float n1,n2;
	char op;
 
	printf("---------------\n");
	printf("CALC\n");
	printf("---------------\n");
 
	printf("N1: ");
	scanf("%f",&n1);
 
	printf("OP:");
	scanf(" %c",&op); 
 
	printf("N2: ");
	scanf("%f",&n2);
 
 
	printf("---------------\n");
 
 
 
	switch(op){
		case '+':
			printf("RESULTADO:   %.1f\n",n1+n2);
		break;
		case '-':
			printf("RESULTADO:   %.1f\n",n1-n2);
		break;
		case '*':
			printf("RESULTADO:   %.1f\n",n1*n2);
		break;
		case '/':
			printf("RESULTADO:   %.1f\n",n1/n2);
		break;						
 
		default:
			printf("OPERADOR INVALIDO");
 
	}
 
	return 0;
}
*/
