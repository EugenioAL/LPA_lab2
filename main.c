#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

int main(int argc, char *argv[])
{
	FILE *arq;
	TAM = atoi(argv[1]);
	no *lista_hash[TAM];
	inicializandoHash(lista_hash,TAM);
	fill_hash(argv[2], lista_hash, TAM);
	print_Hash(lista_hash,TAM);
}