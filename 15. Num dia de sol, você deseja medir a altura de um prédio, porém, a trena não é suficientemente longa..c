// Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa. 
// Assumindo que seja poss�vel medir sua sombra e a do pr�dio no ch�o, e que voc� lembre da sua altura, 
// fa�a um programa para ler os dados necess�rios e calcular a altura do pr�dio

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


