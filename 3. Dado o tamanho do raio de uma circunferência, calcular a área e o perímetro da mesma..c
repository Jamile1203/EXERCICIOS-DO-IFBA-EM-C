// Dado o tamanho do raio de uma circunfer�ncia, calcular a �rea e o per�metro da mesma.

#include<stdio.h>
#include<math.h>

void main(void){
	
float	raio, area, perimetro;


printf("Digite o valor do raio da circunferencia: ");
scanf("%f", &raio);


    area = 3.14 * (raio*raio);
    perimetro =  2 * 3.14 * raio;
    
    printf("\n A area e o perimetro do raio da circunferencia eh : %f, %f", area, perimetro);
   
    
	
}
