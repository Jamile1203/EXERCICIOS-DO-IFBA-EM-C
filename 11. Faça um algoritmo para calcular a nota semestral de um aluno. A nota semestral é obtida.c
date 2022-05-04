// Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida 
// pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por 
// 2 notas de provas. 

#include<stdio.h>

void main(void){
	
	float nota1, nota2;
	float bimestre1, bimestre2, media;

    scanf("%f %f", &nota1, &nota2);

    bimestre1 = (nota1 + nota2)/2;

    scanf("%f %f", &nota1, &nota2);

    bimestre2 = (nota1 + nota2)/2;

    media  = (bimestre1 + bimestre2)/2;

    printf("\nMídia semestral: %.2f\n", media);
	
	
}
