#include "sub1.h"

int main (int argc, char *argv[])
{
  FILE* entrada = fopen("tests/teste.txt", "r");
  char linha[MAX_STRING];
  ler_linha(linha, entrada);
  printf("%s", linha);
  fclose(entrada);
  return 0;
}
