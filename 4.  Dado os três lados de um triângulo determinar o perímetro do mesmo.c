// Dado os tr�s lados de um tri�ngulo determinar o per�metro do mesmo

#include<stdio.h>
#include<math.h>

void main(void){
	
float lado1,lado2,lado3;
float perimetro;


    printf("Digite o valor do 1� lado: ");
scanf("%f", &lado1);
    printf("Digite o valor do 2� lado: ");
scanf("%f", &lado2);
    printf("Digite o valor do 3� lado: ");
scanf("%f", &lado3);

      perimetro = (lado1 + lado2 + lado3);
    
    printf("\n O perimetro do tringulo eh:  %f", perimetro);
   
    
	
}
