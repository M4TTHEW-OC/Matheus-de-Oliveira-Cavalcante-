/* Leia 2 valores inteiros e armaze-os nas vari�veis A e B.
Efetue a soma de A e B atribuido o seu resultado na vari�vel X.
Imprima X conforme exemplo apresentado abaixo. 
soma +
diminui��o -
divis�o / 
multiplica��o *
comando de atribui��o = 
*/
#include <stdio.h>
int main(){

  int a, b, x;

  printf("Usuario, seu lindo! Digite o primeiro numero: ");
  scanf("%d", &a); 
  printf("Usuario, seu lindo! Digite o segundo numero: ");
  scanf("%d", &b);

  x = a + b; //comando de atribi��o = ; operador matematico + 
  printf("X = %d\n", x); 
  printf("X = %d\n", &x); //impress�o do endere�o de memoria em decimal 
  printf("X = %x\n", &x); //impress�o do endere�o de memoria em hexa
  
}


