/* 
 * Enunciado: 
 *   Desenvolva um programa capaz de ler um arquivo de texto e decripte-o
 *   utilizando a estratégia de criptografia ZENIT - POLAR.
 *   A estratégia em questão consiste em substituir os caracteres da string 
 *   da seguinte maneira:
 *
 *            Z <-> P 
 *            E <-> O
 *            N <-> L
 *            I <-> A
 *            T <-> R
 *
 *   O programa deve manter a caixa dos caracteres lidos. Exemplo:
 *     ZeNiT -> PoLaR
 *
 *   É obrigatório implementar as funções cujos protótipos já se encontram
 *   preenchidos. Não os modifique.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING 100

/* 
 * Funções de implementação OBRIGATÓRIA!! Não mude os protótipos 
 *
 */

// A função zenit_polar recebe com parametro um caractere e retorna-o 
// codificado de acordo com a estratégia zenit polar
char zenit_polar(char c);
// O procedimento decripta_linha recebe como parametro uma linha e modifica-a,
// decriptando-a de acordo com a estratégia zenit polar
void decripta_linha(char* linha);
// O procedimento ler_linha deve ler uma linha de um arquivo (arq) e armazenar
// em uma string (linha).
void ler_linha(char* linha, FILE* arq);
// O procedimento decripta arquivo deve abrir dois arquivos a partir dos nomes
// dos arquivos (nome_entrada e nome_saida). Cada linha do arquivo de entrada
// deve ser lida, decriptada e gravada no arquivo de saida
void decripta_arquivo(char* nome_entrada, char* nome_saida);

int main (int argc, char *argv[])
{
  char entrada[MAX_STRING] = "msg.txt";
  char saida[MAX_STRING] = "solucao.txt";

  return EXIT_SUCCESS;
}

void decripta_arquivo(char* nome_entrada, char* nome_saida) {
}

void ler_linha(char* linha, FILE* arq) {
}

void decripta_linha(char* linha) {
}

char zenit_polar(char c) {
}
