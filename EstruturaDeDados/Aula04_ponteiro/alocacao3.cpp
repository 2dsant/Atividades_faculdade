#include <stdio.h>
#include <stdlib.h>
 
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	double *n; /* o ponteiro para o espaço alocado */

	n = (double *)malloc(sizeof(double));

	/* vejo se conseguiu alocar */
	if (!n) {
		printf("Não conseguiu alocar a memória\n");
		exit(1);
	}

	/* uso o double */
	//...

	/* libero a memória alocada */
	free(n);

	/* o programa continua */
//	...
}
