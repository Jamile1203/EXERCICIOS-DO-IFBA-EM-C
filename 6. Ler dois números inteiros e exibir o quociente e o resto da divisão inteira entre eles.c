// Ler dois n�meros inteiros e exibir o quociente e o resto da divis�o inteira entre eles.

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
	
	printf("O quociente e o resto da divis�o respectivamente eh : %f, %d", quociente,resto);
	
	
}
