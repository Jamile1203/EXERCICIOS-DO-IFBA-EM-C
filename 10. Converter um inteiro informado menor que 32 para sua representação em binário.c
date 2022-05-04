// Converter um inteiro informado menor que 32 para sua representação em binário

#include<stdio.h>
#include<math.h>

void main(void){
	
	int num,vlr;
	
	printf("Informe um valor menor que 32 :");
	scanf("%d", vlr);
	binario(vlr);

	
	return 0;
}

void binario(int num){
	if(num ==0){
		return 0;
	}
	binario(num/2);
	printf(num % 2);
}
