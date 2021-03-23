#include <stdio.h>
#include <stdlib.h>
 
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	double *a, *b, *c;
	printf("Digite um número: ");
	a = (double *)malloc(sizeof(double));
	scanf("%lf",a);
	printf("Digite outro número: ");
	b = (double *)malloc(sizeof(double));
	scanf("%lf",b);
	c = (double *)malloc(sizeof(double));
	*c = (*a + *b) / 2;
	printf("A média é: %lf", *c);
	free(a);
	free(b);
	free(c);
}

