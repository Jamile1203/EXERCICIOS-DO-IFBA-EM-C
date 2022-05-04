// Em uma cidade se deseja sincronizar os sem�foros. Com isto, quando um sem�foro abre (fica verde), os ve�culos que nele estavam parados tendem a encontrar os pr�ximos 
//sem�foros tamb�m abertos.Para que isto seja feito, os pr�ximos sem�foros precisam abrir um pouco depois, dependendo da velocidade permitida na via e da dist�ncia entre eles
//Assim, ao abrir o sem�foro, um ve�culo come�a a acelerar at� atingir velocidade permitida, que mant�m at� chegar ao pr�ximo sem�foro, levando um certo tempo para percorrer essa dist�ncia.
// Para que encontre o pr�ximo sem�foro aberto, este deve abrir um pouco antes da chegada do ve�culo (por ex: 3 segundos antes).   
//  Fa�a assim um algoritmo que informe quanto tempo depois um sem�foro deve abrir, dada as seguintes informa��es: 
// a. a dist�ncia desde o sem�foro anterior b. a velocidade permitida da via   c. a acelera��o t�pica dos carros

#include<stdio.h>

void main(void){

	
    float distancia, velocidade, aceleracao;
    printf("Digite a distancia percorrida: ");
    scanf("%f", &distancia);
    printf("\n Digite a velocidade percorrida: ");
    scanf("%f",&velocidade);
    printf("\n Digite a acelera��o: ");
    scanf("%f",&aceleracao);

    float tempo = velocidade/aceleracao;

    tempo += distancia/velocidade;

    printf("%.0f\n", tempo);

       
}

