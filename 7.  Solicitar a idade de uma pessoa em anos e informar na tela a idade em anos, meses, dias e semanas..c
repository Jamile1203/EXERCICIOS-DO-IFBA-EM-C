// Solicitar a idade de uma pessoa em anos e informar na tela a idade em anos, meses, dias e semanas.

#include<stdio.h>

int main(){
	int idade, idade_em_anos, idade_em_dias, idade_em_meses, idade_em_semanas;
	
	printf("Digite sua idade: "); 
	scanf("%d", &idade);
	
	idade_em_anos == idade;
	idade_em_dias = idade * 385;
	idade_em_meses = idade * 12;
	idade_em_semanas = idade * 48;
	
	printf("Sua idade em anos eh: %d", idade);
	printf("\n Sua idade em dias eh: %d", idade_em_dias);
	printf("\n Sua idade em meses eh: %d", idade_em_meses);
	printf("\n Sua idade em semanas eh: %d", idade_em_semanas);
	
}

