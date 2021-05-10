#include <stdio.h>
#include <stdlib.h>

struct Fila {

	int capacidade;
	char *dados;
	int primeiro;
	int ultimo;
	int nItens; 

};

void criarFila( struct Fila *f, int c ) { 

	f->capacidade = c;
	f->dados = (char*) malloc (21);
	f->primeiro = 0;
	f->ultimo = -1;
	f->nItens = 0; 

}

void inserir(struct Fila *f, char v) {

	if(f->ultimo == f->capacidade-1)
		f->ultimo = -1;

	f->ultimo++;
	f->dados[f->ultimo] = v; // incrementa ultimo e insere
	f->nItens++; // mais um item inserido

}

int remover( struct Fila *f ) { // pega o item do come�o da fila

	int temp = f->dados[f->primeiro++]; // pega o valor e incrementa o primeiro

	if(f->primeiro == f->capacidade)
		f->primeiro = 0;

	f->nItens--;  // um item retirado
	return temp;

}

int estaVazia( struct Fila *f ) { // retorna verdadeiro se a fila está vazia

	return (f->nItens==0);

}

int estaCheia( struct Fila *f ) { // retorna verdadeiro se a fila está cheia

	return (f->nItens == f->capacidade);
}

void mostrarFila(struct Fila *f){

	int cont, i;

	for ( cont=0, i= f->primeiro; cont < f->nItens; cont++){

		printf("%s", f->dados[i++]);

	}
	printf("\n\n");

}

int main () {

	int opcao, capa;
	char valor;
	struct Fila umaFila;

	// cria a fila
	printf("\nCapacidade da fila? ");
	scanf("%d",&capa);
	criarFila(&umaFila, capa);

	// apresenta menu
	while( 1 ){

		printf("\n1 - Inserir elemento\n2 - Remover elemento\n3 - Mostrar Fila\n0 - Sair\n\nOpcao? ");
		scanf("%d", &opcao);

		switch(opcao){

			case 0: exit(0);

			case 1: // insere elemento
				if (estaCheia(&umaFila)){

					printf("\nFila Cheia!!!\n\n");

				}
				else {

					printf("\nValor do elemento a ser inserido? ");
					scanf("%s", &valor);
					inserir(&umaFila,valor);

				}

				break;

			case 2: // remove elemento
				if (estaVazia(&umaFila)){

					printf("\nFila vazia!!!\n\n");

				}
				else {

					valor = remover(&umaFila);
					printf("\n%s removido com sucesso\n\n", valor) ; 

				}
				break;

				case 3: // mostrar fila
					if (estaVazia(&umaFila)){

						printf("\nFila vazia!!!\n\n");

					}
					else {

						printf("\nConteudo da fila => ");
						mostrarFila(&umaFila);

					}
					break;

				default:
					printf("\nOpcao Invalida\n\n");

		}
	}
}


