// Escreva um programa para gerar o invertido de um número com três algarismos (exemplo: o invertido de 498 é 894)

#include<stdio.h>

void main(void){

    int numero, centena = 0, dezena = 0;
 
    printf("Digite um numero com tres algarismos: ");
    scanf("%d",&numero);

   while(numero >= 10){
        if(numero >= 100){
            numero -= 100;
            centena += 1;
        }
       else if{
            numero -= 10;
            dezena += 1;
        }
    }

    printf("%d%d%d\n", numero, dezena, centena);


}

