// Dado os três lados de um triângulo determinar o perímetro do mesmo

#include<stdio.h>
#include<math.h>

void main(void){
	
float lado1,lado2,lado3;
float perimetro;


    printf("Digite o valor do 1º lado: ");
scanf("%f", &lado1);
    printf("Digite o valor do 2º lado: ");
scanf("%f", &lado2);
    printf("Digite o valor do 3º lado: ");
scanf("%f", &lado3);

      perimetro = (lado1 + lado2 + lado3);
    
    printf("\n O perimetro do tringulo eh:  %f", perimetro);
   
    
	
}
