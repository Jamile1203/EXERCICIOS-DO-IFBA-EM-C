// Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa. 
// Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, 
// faça um programa para ler os dados necessários e calcular a altura do prédio

#include<stdio.h>

int main(){
	
	float sp,su;au,st,ap;
	
	printf("Digite o tamanho da sombra do predio: ");
	scanf("f", &sp);
	printf("\n Digite o tamanho da sombra do usuario: ");
	scanf("f", &su);
	printf("\n Digite a altura do usuario: ");
	scanf("f", &au);
	
	st= sp/su;
	ap = st*au;
	
	printf("A altura do predio eh: ", ap);
	
	return 0;
}


