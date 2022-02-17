Efetue a soma de A e B atribuido o seu resultado na variável X.
Imprima X conforme exemplo apresentado abaixo. 
soma +
diminuição -
divisão / 
multiplicação *
comando de atribuição = 
*/
#include <stdio.h>
int main(){

  int a, b, x;

  printf("Usuario, seu lindo! Digite o primeiro numero: ");                
  scanf("%d", &a); 
  printf("Usuario, seu lindo! Digite o segundo numero: ");
  scanf("%d", &b);

  x = a + b; //comando de atribição = ; operador matematico + 
  printf("X = %d\n", x); 
  printf("X = %d\n", x); //impressão do endereço de memoria em decimal 
  printf("X = %x\n", x); //impressão do endereço de memoria em hexa
  
}


