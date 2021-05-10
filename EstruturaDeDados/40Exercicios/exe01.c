#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um algoritmo que receba dois números e exiba o resultado da sua soma.

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Número um: ");
	scanf("%d", &num1);
	printf("Número dois: ");
	scanf("%d", &num2);
	
	printf("Soma: %d", num1 + num2);
	
	return 0;
}
