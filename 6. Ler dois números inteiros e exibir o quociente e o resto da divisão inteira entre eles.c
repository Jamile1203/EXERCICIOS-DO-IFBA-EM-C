// Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.

#include<stdio.h>
#include<math.h>

void main(void){
	
	int x,y,resto;
	float quociente;
	
	    printf("Digite o primeiro numero inteiro:  ");
	scanf("%d", &x);
		printf("Digite o segundo numero inteiro:  ");
	scanf("%d", &y);
	
	quociente = x / y;
	resto = x % y;
	
	printf("O quociente e o resto da divisão respectivamente eh : %f, %d", quociente,resto);
	
	
}
