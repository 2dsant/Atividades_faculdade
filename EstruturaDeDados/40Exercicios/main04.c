#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo e //o total de vendas efetuadas 
//por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão //sobre suas vendas efetuadas, 
//informar o seu nome, o salário fixo e salário no final do mês

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	char vendedor[50];
	float sal, vendas, comissao, salarioF;
	
	printf("Vendedor: ");
	scanf("%s", &vendedor);
	printf("Salário fixo: ");
	scanf("%f", &sal);
	printf("Vendas no mês: ");
	scanf("%f", &vendas);
	comissao = (vendas * 0.15);
	salarioF = (comissao + sal);
	
	printf("\nVendedor: %s ", vendedor);
	printf("\nSalário fixo: %.2f", sal);
	printf("\nSalário final: R$%.2f \n", salarioF);
	
	system("pause") ;
	return 0;
}
