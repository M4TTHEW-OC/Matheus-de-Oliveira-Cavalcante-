#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int idade;
	
	printf("Eleitoral\n");
	
	printf("informe sua idade:");
	scanf ("%d",&idade);
	
    if (idade<1){
        printf ("não nasceu\n");
        }else{ 
          
        if(idade <16){
		  printf("Nao vota\n");
	      }else{
	      
	        if (idade < 18){
			printf("Opicional\n");
		    }else{
		    	
		    	if (idade <65){
				    if (idade == 41){
				    printf("Premio 1 e Obrigatorio\n");
				    }else{
				    printf("Obrigatorio\n");
				    }
			    }else{
					if (idade == 82){
						printf("Premio 2 e Opicional\n");
					}else{
						 printf("Opicional\n");
                   }
			   }
           }
       }
   }     

	return 0;
}
