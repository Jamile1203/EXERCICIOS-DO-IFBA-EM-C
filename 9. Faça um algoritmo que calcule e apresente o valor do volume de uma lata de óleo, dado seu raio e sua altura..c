// Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura.


#include<stdio.h>
#include<math.h>

void main(void){
	
	float raio, altura, volume;
	
	printf("Digite o raio da lata de oleo:  ");
	scanf("%f", &raio);
	printf("Digite a altura da lata de oleo:  ");
	scanf("%f", &altura);
	
	volume = 3.14 * (raio * raio) * altura;
	
	printf("O volume da lata eh: %1.f", volume);
	
}
