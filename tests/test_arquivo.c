#include "sub1.h"

int main (int argc, char *argv[])
{
  char entrada[MAX_STRING] = "tests/teste.txt";
  char saida[MAX_STRING] = "tests/solucao.txt";
  decripta_arquivo(entrada, saida);
  FILE *check = fopen(saida, "r");
  char linha[MAX_STRING];
  while(fgets(linha, MAX_STRING, check))
    printf("%s", linha);
  fclose(check);
  return 0;
}
