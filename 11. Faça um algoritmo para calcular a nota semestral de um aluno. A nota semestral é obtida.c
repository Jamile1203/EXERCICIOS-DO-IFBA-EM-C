// Fa�a um algoritmo para calcular a nota semestral de um aluno. A nota semestral � obtida 
// pela m�dia aritm�tica entre a nota de 2 bimestres. Cada nota de bimestre � composta por 
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

    printf("\nM�dia semestral: %.2f\n", media);
	
	
}
