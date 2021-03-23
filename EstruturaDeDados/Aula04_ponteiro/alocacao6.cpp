#include <stdio.h>
#include <stdlib.h>
 
#include <stdio.h>
#include <stdlib.h>
int main ()


{
	int n, *a, i;
	printf("Informe a quantidade: ");
	scanf("%d",&n);
	a = (int *)malloc(n * sizeof(int));
	for(i = 0; i < n; i++)
	{
		printf("Posição %d: ", i);
		scanf("%d", a + i);
	}
	free(a);
}

