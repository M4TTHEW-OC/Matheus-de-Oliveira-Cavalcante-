#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int numero, i, y, x = 1;
	printf("Digite um numero:");
	scanf("%d", &numero);
	y = numero;
	
	for (i = 1; i <= numero; i++){
        //Valor do x
        if (i % 4 == 0 && i % 5 == 0) printf("BINGO  ");
        else if (i % 4 == 0) printf("M4  ");
        else if (i % 5 == 0) printf("M5  ");
        else printf("%d  ", i);
        
        //Valor de y
        if (y % 4 == 0 && y % 5 == 0) printf("BINGO  \n");
        else if (y % 4 == 0) printf("M4  \n");
        else if (y % 5 == 0) printf("M5  \n");
        else printf("%d  \n", y);
        y--;
	}
	return 0;
}

