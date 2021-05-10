#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escrever um algoritmo para determinar o consumo médio de um automóvel //sendo 
//fornecida a distância //total percorrida pelo automóvel e o total de combustível //gasto.

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float dist, comb;
	
	printf("Distância: ");
	scanf("%f", &dist);
	printf("Combustivel gasto: ");
	scanf("%f", &comb);
	
	printf("Consumo médio: %.2f", dist / comb);

	
	return 0;
}
