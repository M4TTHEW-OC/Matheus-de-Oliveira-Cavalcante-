/*A formula para calcular a Àrea da circunferenciae e definada por A = n .  */


#include <stdio.h>
#include <math.h>// biblioteca matemática 

#define  PI 3.1 // definição de uma constante 
int main(){

double r, resultado;

printf("Digite o valor do Raio :");
scanf("%lf", &r);

resultado = r * r * 3.14159; 
resultado = pow(raio,2) * PI;
printf("O resultado da area do circulo e : %.1lf ", resultado); // quando adicionar .x antes do lf indica a quantida de casas depois da virgula .



}
