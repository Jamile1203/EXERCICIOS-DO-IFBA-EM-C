// Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para 
// Km/h. Para tal, multiplique o valor em m/s por 3,6. 

#include<stdio.h>

void main(void){
	
	float velocidade,convertido;
	
	printf("Digite a velocidade em m/s: ");
	scanf("%f", &velocidade);
	
	convertido = velocidade * 3.6;
	
	printf("A velocidade convertida em k/m eh: %f", convertido);
	
}
