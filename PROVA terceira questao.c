// Escreva um programa em C para ler dois valores do teclado "num1 e num2". Caso sejam iguais, informar apenas o texto: 
// "Números iguais". Se forem diferentes, exibir na tela o maior dividido pelo menor.


#include<stdio.h>

void main(void){
	float num1,num2;
	float div1,div2;
	
	printf("Digite o primeiro numero:");
	scanf("%f", &num1);
	printf("Digite o segundo numero:");
	scanf("%f", &num2);
	
	if(num1 == num2){
		printf("Numeros iguais");
	}
	 else if(num1>num2){
		div1 = num1 / num2;
		printf("%f", div1);
	}
	else if(num2 > num1){
		div2 = num2 / num1;
		printf("%f", div2);
	}
	      
	
	}


	

