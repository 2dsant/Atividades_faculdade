#include <stdio.h>
#include <stdlib.h>
 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{

int *p;
	p = (int *)malloc(sizeof(int));
	*p = 42;
	printf("%d",*p);
	free(p);

}
