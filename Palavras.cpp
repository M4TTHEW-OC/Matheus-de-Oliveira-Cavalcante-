#include<stdio.h>

int main(){
char letra;
char palavra[50];
char unicaPalavra[50];
char duasPalavras[50];

	
	printf("Digite a letra: ");
	scanf("%c", &letra);// apenas esse pode ser utiizado no switch.
	fflush(stdin);// Limpar buffer (apenas para chat string)
	printf("Digite a palavra: ");
	scanf("%s", &unicaPalavra);// não permite colocar espaços
	printf("digite as palavras desejadas: ");
	fflush(stdin);
	fgets(duasPalavras, 50, stdin);//permite colocar espaço

    printf("Letra: %c\n", letra);
    printf("Unica palavra: %s\n", unicaPalavra);
    printf("Duas palavras: %s\n", duasPalavras);

switch(letra){
	case 'S': 
		printf("Digitou S\n"); break;
	case 'N': 
		printf("Digitou N\n"); break;
	case 'F': 
		printf("Digitou F\n"); break;
}


}
