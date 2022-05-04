// Ler um número inteiro e exibir o seu sucessor.

#include<stdio.h>

int main (){
	
	int nr,i; 
	int antecessor;
	
	printf("Digite um numero: ");
	scanf("%d", &nr);
	
	antecessor = nr - 1;
	
    printf("Seu antecessor eh:  %d", antecessor);
    
	return 0;
}
	


