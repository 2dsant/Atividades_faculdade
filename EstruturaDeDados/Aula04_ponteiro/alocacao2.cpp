#include <stdio.h>
#include <stdlib.h>
 
#include <stdio.h>
#include <stdlib.h>

int main() {
	char *c; /* o ponteiro para o espaço alocado */

	/* aloco um único byte na memória */
	c = (char *)malloc(124000);

	/* vejo se conseguiu alocar */
	if (!c) {
		printf("Não conseguiu alocar a memória\n");
		exit(1);
	}

	/* carrego um valor na região de memória alocada */
	*c = 'd';


	/* escrevo este valor */
	printf("%c\n",*c);

	/* libero a memória alocada */
	free(c);
}
