#include <stdio.h>
 
// 2 - prototipação
int em_uma_decada(int minha_idade);
 
int main() {
	int idade = 0, idade_mais_10 = 0;
	printf("Informe a idade: ");
	scanf("%d",&idade);
 
// 3 - chamada da função
	idade_mais_10 = em_uma_decada(idade);
	printf("%d\n",em_uma_decada(idade));
	printf("%d\n",idade_mais_10);
	printf("Valores acima em uma decada com base na idade informada: %d\n",idade);
 
	return 0;
}
 
 
// 1 - declaração
int em_uma_decada(int minha_idade){
	//printf("@ idade informada: %d\n",minha_idade);
	return minha_idade + 10;	
}

	
	                        
/* 	
         _____
		|    |
		|    V
     notas [10][20][30] X
		   [0] [1] [2]

   [Jit] -->								    Modularização							idade_mais_10 | idade: |  m.idade
   -----             ____________				subprogamas									   Ø	  |   Ø	   |     Ø
	a = 10;		    |    _____  |															 		  |  17	   |    17
	b = 20;		    |	|	 |  |				funções: return.
	c = [*b;]	   [0]  V	 | [3]			procedimentos: não tem retorno "void".
				  [10][20] [x] [8]			
	________	   a   b   c    d				3 momentos:
	b = 30        2040 2041 2042 2043				declaração
	               |			   |				protótipo
|[int] notas[10];|  ---------------				chamada
--------------	        |
	            		v
	            		8c
	            	10  30  30
*/
	            	
