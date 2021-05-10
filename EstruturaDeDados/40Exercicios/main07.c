#include <stdio.h>
#include <stdlib.h>

struct Pilha {
	int topo;
	int capacidade;
	float *pElem;
};

void criarPilha( struct Pilha *p, int c ){
   p->topo = -1;
   p->capacidade = c;
   p->pElem = (float*) malloc (c * sizeof(float));
}
int isEmpty ( struct Pilha *p ){
   if( p-> topo == -1 )
      return 1;
   else
      return 0;
}

int isFull ( struct Pilha *p ){
	if (p->topo == p->capacidade - 1)
		return 1;
	else
		return 0;
}

void empilhar ( struct Pilha *p, float v){
	p->topo++;
	p->pElem [p->topo] = v;
}

float desempilhar ( struct Pilha *p ){
   float aux = p->pElem [p->topo];
   p->topo--;
   return aux;
}

float isTop ( struct Pilha *p ){
   return p->pElem [p->topo];
}

int main(){
	struct Pilha minhapilha;
	int capacidade, op;
	float valor;

	printf( "\nCapacidade da pilha? " );
	scanf( "%d", &capacidade );

	criarPilha (&minhapilha, capacidade);

	do{
		printf("\n1- Empilhar\n");
		printf("2- Desempilhar\n");
		printf("3- Mostrar o topo \n");
		printf("4- sair\n");
		printf("\nopcao? ");
		scanf("%d", &op);

		switch (op){
			case 1: 

				if( isFull( &minhapilha ) == 1 )
					printf("\nPILHA CHEIA! \n");
				else {
					printf("\nVALOR? ");
					scanf("%f", &valor);
					empilhar (&minhapilha, valor);
				}
				break;

			case 2:
				if ( isEmpty(&minhapilha) == 1 )
					printf( "\nPILHA VAZIA! \n" );
				else{
					valor = desempilhar (&minhapilha);
					printf ( "\n%.1f DESEMPILHADO!\n", valor );
				}
				break;

			case 3:
				if ( isEmpty(&minhapilha) == 1 )
					printf( "\nPILHA VAZIA!\n" );
				else {
					valor = isTop (&minhapilha);
					printf ( "\nTOPO: %.1f\n", valor );
				}
				break;

			case 4: 
				exit(0);
				
			default: printf( "\nOPCAO INVALIDA! \n" );
		}
	} while ( 1 );
}

