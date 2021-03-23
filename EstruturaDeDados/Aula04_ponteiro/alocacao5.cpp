
#include <stdio.h>
#include <stdlib.h>
 
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int *i;
	printf("Números de 1 a 10:");
	i = (int *)malloc(sizeof(int));
	for(*i = 1; *i<=10; (*i)++)
		printf("%d",*i);
}

