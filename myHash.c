#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

void inicializandoHash(no *lista_hash[],int tam){
	for(int cont = 0 ; cont < tam; cont++){
		lista_hash[cont] = NULL;
	}
}

void print_Hash(no *lista_hash[],int tam){
	for(int cont = 0 ; cont < tam ; cont++){
		printf("POSICAO %d DA TABELA HASH: \n", cont);
		print_Lista(&lista_hash[cont]);
	}
}

int func_Hash(long long int cpf, int tam){
	int posicao;
	posicao = cpf % tam;
}

void fill_hash(char *arq, no *lista_hash[], int tam){
	FILE *arq_in;
	pessoa tmp;
	arq_in = fopen(arq,"r");
	while(fscanf(arq_in, "%50[^\t]\t%lld\t%d\n", &tmp.nome, &tmp.cpf, &tmp.idade) != EOF){
		int posicao = func_Hash(tmp.cpf,TAM);
		insere_lista_fim(&lista_hash[posicao],tmp);
	}
}
