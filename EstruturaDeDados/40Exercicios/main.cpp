#include <stdio.h>

int main(void) {

  typedef struct {
      char nome[50];
      int idade;
  } Pessoa;
  Pessoa Pess[10];

  for(int i = 0; i <= 10; i++) {
    printf("Nome: ");
    scanf("%s", &Pess[i].nome);
    printf("Idade: ");
    scanf("%d", &Pess[i].idade);
  }

  for(int i = 0; i < 10; i++){
    printf("%s: %d anos\n",Pess[i].nome, Pess[i].idade);
  }
}
