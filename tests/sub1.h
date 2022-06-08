#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING 100

char zenit_polar(char c);
void decripta_linha(char* linha);
void ler_linha(char* linha, FILE* arq);
void decripta_arquivo(char* nome_entrada, char* nome_saida);
