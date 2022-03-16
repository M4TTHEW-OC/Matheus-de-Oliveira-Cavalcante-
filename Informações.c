#include <stdio.h>

int main(int argc, char *argv[]) {


  int idade;
  char nome[100], sexo;
  float altura;
    printf("Digite o Nome:");
    scanf("%[^\n]s", &nome);
	fflush(stdin);
	
	
    printf("Informe seu sexo:");
    scanf("%c", &sexo);
    
    printf("Informe seu idade:");
    scanf("%d", &idade);
    
    printf("Informe seu altura:");
    scanf("%f", &altura);
    
    printf("%s do sexo %c tem a idade %d com a altura de %.2f", nome, sexo, idade, altura);
    
    
    return 0;
}

