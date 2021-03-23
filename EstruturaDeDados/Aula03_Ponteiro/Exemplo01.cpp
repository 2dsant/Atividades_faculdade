#include <iostream>
#include <stdio.h>
#include <strings.h>
#include <conio.h>
int main(void)
{
  // criando a variável ponteiro para o arquivo
  FILE *pont_arq;
  
  //abrindo o arquivo
  pont_arq = fopen("arquivo.txt", "w");
  
  // fechando arquivo
  fclose(pont_arq);
  
  //mensagem para o usuário
  printf("O arquivo foi criado com sucesso!");
  
  system("pause");
  return(0);
}
