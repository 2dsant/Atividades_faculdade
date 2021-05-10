#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escrever um algoritmo que leia o nome de um aluno e as notas das três provas que ele obteve no semestre. No final
// informar o nome do aluno e a sua média (aritmética)

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	char aluno[60];
	float nota1, nota2, nota3, media;
	
	printf("Aluno: ");
	scanf("%s",&aluno);
	printf("Primeira nota: ");
	scanf("%f",&nota1);
	printf("Segunda nota: ");
	scanf("%f",&nota2);
	printf("Terceira nota: ");
	scanf("%f",&nota3);
	media = (nota1 + nota2 + nota3) / 3;
	
	printf("\nAluno: %s", aluno);
	printf("\nMédia: %.2f \n", media);
	
	system("pause");
	return 0;
}
