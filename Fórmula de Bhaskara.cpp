/*Leia 3 n�meros de ponto flutuante. Depois, imprima as ra�zes da f�rmula de bhaskara. 
Se for imposs�vel calcular as ra�zes por divis�o por zero ou raiz quadrada de um n�mero negativo, apresenta a mensagem �Impossivel calcular� .*/

#include<stdio.h>
#include<math.h>
int main(){
	
	double a, b, c, x, x1, x2;
	
	
	printf("Informe o valor da variavel A: ");
	scanf("%lf", &a);
	printf("Informe o valor da variavel b: ");
	scanf("%lf", &b);
	printf("Informe o valor da variavel C: ");
	scanf("%lf", &c);

    x = (b * b) - 4 * a * c;
    
    if (a <=0)
	printf("Valor informado sera Impossivel calcular\n");
	
	else if (b <=0)
	printf("Valor informado sera Impossivel calcular\n");
	
    else if (c <=0)
	printf("Valor informado sera Impossivel calcular\n");
	
	x1 = (-b - sqrt(x)) / 2 * a;
	x2 = (-b + sqrt(x)) / 2 * a;
	    
        printf("O valor da raiz x1 foi %lf", x1); 
        printf("O valor da raiz x2 foi %lf", x2);
         
    
    



}
