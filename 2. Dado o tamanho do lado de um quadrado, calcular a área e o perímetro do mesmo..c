// Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.

#include<stdio.h>
#include<math.h>

void main(void){
int	b,h;
int area,perimetro;

printf("Digite o valor da base do quadrado: ");
scanf("%d", &b);
printf("Digite o valor da altura do quadrado: ");
scanf("%d", &h);

    area = b*h;
    perimetro =  4 * sqrt(area);
    
    printf("\n A area do retangulo e seu perimetro respectivamete eh %d, %d: ", area,perimetro);
   
    
	
}
