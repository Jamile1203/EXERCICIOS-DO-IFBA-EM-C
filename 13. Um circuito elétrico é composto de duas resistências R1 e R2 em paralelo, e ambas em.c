//  Um circuito el�trico � composto de duas resist�ncias R1 e R2 em paralelo, e ambas em 
// sequ�ncia de uma resist�ncia R3. Fa�a um algoritmo para calcular a resist�ncia 
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

