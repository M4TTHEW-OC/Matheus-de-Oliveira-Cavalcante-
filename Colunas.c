#include <stdio.h>
#include <stdlib.h>


int main() {
	int primeiro, inverso, numero;
	
	printf("Digite um numero (1-500):");
	scanf("%d", &numero);
	inverso = numero;
	
	for(primeiro = 1; primeiro <numero + 1; primeiro++){
		if(primeiro % 4 == 0 && primeiro % 5 == 0){
			
			printf("Bingo  ");
		}else if(primeiro % 5 == 0){
			printf("M5  ");
	    }else if(primeiro % 4 == 0){
	    	printf("M4  ");
	    }else{
	    	printf("%i  ", primeiro);
		}
		if(inverso % 4 == 0 && inverso % 5 == 0){
			printf("Bingo\n");
		}else if(inverso % 5 == 0){
			printf("M5\n");
	    }else if(inverso % 4 == 0){
	    	printf("M4\n");
	    }else{
	    	printf("%i\n", inverso);
        }
        inverso = inverso -1;
}
	
	
	
	return 0;
}

/* 
   #include <stdio.h>
 
int main() {
    
    int num = 0, tentativa = 0, i =0, j = 0;
    
    printf("BINGO\n");  
    do{
        if(tentativa!=0){
            printf("\n**************\nERRO\n**************\n"); 
        }
        printf("Informe um valor (1-500): ");
        scanf("%d",&num);
        tentativa++;
    }while(num<1 || num>500);
 
    for(i=1,j=num;i<=num;i++,j--){
        //coluna 1
        if(i%4==0 && i%5==0){
            printf("BINGO\t\t");
        }else{
            if(i%4==0){
                printf("M4\t\t");
            }else{
                if(i%5==0){
                    printf("M5\t\t");
                }else{
                    printf("%d\t\t",i);     
                }   
            }   
        }
        
        //coluna 2
        if(j%4==0 && j%5==0){
            printf("BINGO\n");
        }else{
            if(j%4==0){
                printf("M4\n");
            }else{
                if(j%5==0){
                    printf("M5\n");
                }else{
                    printf("%d\n",j);       
                }   
            }   
        }
    }
    
    return 0;
}
*/

   
