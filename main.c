#include <stdio.h>
#include <stdlib.h>


 
int main() {
 
	float notas[10], menor, maior;
	int i = 0,  tam = 0;
	char continuar = 's';
 
	do{
		printf("Informe a nota %d:",i+1);
		scanf("%f",&notas[i]);	
		i++;
 
		printf("Deseja continuar (s/n)?");
		scanf(" %c",&continuar);	
	}while(i<10 && continuar=='s');
 
 
	printf("--------------\n");
 
	tam = i;
 
	for(i=0;i<tam;i++){
 
		if(i==0){
			menor = notas[i];
			maior = notas[i];
		}else{
			if(notas[i]<menor){
				menor=notas[i];
			}			
			if(notas[i]>maior){
				maior=notas[i];
			}
		}
 
	}
 
	printf("--------------\n");
	printf("A menor nota informada foi: %.1f\n",menor);
	printf("A maior nota informada foi: %.1f\n",maior);
 
	return 0;
}
