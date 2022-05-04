//  Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em 
// sequência de uma resistência R3. Faça um algoritmo para calcular a resistência 
// equivalente desse circuito. 

#include<stdio.h>
#include<math.h>

void main (void){
	
	float R1,R2,R3;
	float equivalencia;
	
	printf("Informe a primeira resistencia: ");
	    scanf("%f", &R1);
	printf("Informe a segunda resistencia: ");
		scanf("%f", &R2);
	printf("Informe a terceira resistencia: ");
		scanf("%f", &R3);
	
	
	equivalencia = 1/(1/R1)+(1/R2)+(1/R3);
	
	printf("A equivalencia do circuito eh :  %f", equivalencia);
}

