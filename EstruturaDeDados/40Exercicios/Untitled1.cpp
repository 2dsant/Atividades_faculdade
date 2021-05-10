#include <stdio.h>
#include <stdlib.h>

struct Pilha {

	int topo; /* Posição do elemento topo */
	int capa;
	char *pElem;

};

void criarpilha( struct Pilha *p, int c ){

   p->topo = -1;
   p->capa = c;

}
int estavazia ( struct Pilha *p ){

   if( p-> topo == -1 )

      return 1;   // true

   else

      return 0;   // false

}

int estacheia ( struct Pilha *p ){

	if (p->topo == p->capa - 1)

		return 1;

	else

		return 0;

}

void empilhar ( struct Pilha *p, char nome){

	p->topo++;
	p->pElem [p->topo] = nome;

}

char desempilhar ( struct Pilha *p ){

   char aux = p->pElem [p->topo];
   p->topo--;
   return aux;

}

char retornatopo ( struct Pilha *p ){

   return p->pElem [p->topo];

}

int main(){

	struct Pilha minhapilha;
	int capacidade, op;
	char nome;

	printf( "\nCapacidade da pilha? " );
	scanf( "%d", &capacidade );

	criarpilha (&minhapilha, capacidade);

	while( 1 ){ /* loop infinito */

		printf("\n1- empilhar (push)\n");
		printf("2- desempilhar (POP)\n");
		printf("3- Mostrar o topo \n");
		printf("4- sair\n");
		printf("\nopcao? ");
		scanf("%d", &op);

		switch (op){

			case 1: //push

				if( estacheia( &minhapilha ) )

					printf("\nPILHA CHEIA! \n");

				else {

					printf("\nVALOR? ");
					scanf("%s", &nome);
					empilhar (&minhapilha, nome);

				}
				break;

			case 2: //pop
				if ( estavazia(&minhapilha) == 1 )

					printf( "\nPILHA VAZIA! \n" );

				else{

					nome = desempilhar (&minhapilha);
					printf ( "\n%s DESEMPILHADO!\n", nome );

				}
				break;

			case 3: // mostrar o topo
				if ( estavazia (&minhapilha) == 1 )

					printf( "\nPILHA VAZIA!\n" );

				else {

					nome = retornatopo (&minhapilha);
					printf ( "\nTOPO: %s\n", nome );

				}
				break;

			case 4: 
				exit(0);

			default: printf( "\nOPCAO INVALIDA! \n" );
		}
	}
	
}

