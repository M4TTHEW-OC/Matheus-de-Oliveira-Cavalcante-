#include<stdio.h>

int main(){
	int idade;
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
    if (idade <= 0 && idade > 120 )
    printf("Idade invalida.");
switch (idade){
	case 0 ... 10: printf("Crianca"); break;
	case 11 ... 17: printf("Adolecente"); break;
	case 18 ... 59: printf("Adulto"); break;
	case 60 ... 99: printf("Idoso"); break;
	case 100 ... 120: printf("Zumbi"); break;
	
	default: printf("Idade invalida");
}
	
}
