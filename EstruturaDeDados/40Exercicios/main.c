#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um algoritmo que receba dois números e ao final mostre a soma, //subtração, 
// multiplicação e a divisão dos números lidos.

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2;
	
	printf("Número um: ");
	scanf("%f", &num1);
	printf("Número dois: ");
	scanf("%f", &num2);
	
	printf("\nSoma: %.2f", num1 + num2);
	printf("\nSubtração: %.2f", num1 - num2);
	printf("\nMultiplicação: %.2f", num1 * num2);
	printf("\nDivisão: %.2f", num1 / num2);

	
	return 0;
}
