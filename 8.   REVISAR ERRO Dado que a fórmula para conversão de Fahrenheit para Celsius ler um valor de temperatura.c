// Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), ler um valor de temperatura 
// em Fahrenheit e exibi-lo em Celsius .

#include<stdio.h>
#include<math.h>

void main(void){
	
	float C, F;
	
	printf("Digite a temperatura em fahrenheit:  ");
	scanf("%f", &F);
	
	C = (5.0 / 9.0) * (F – 32);
	
	printf("A temperatura convertida em Celsius eh:  %f", C);
	
}
