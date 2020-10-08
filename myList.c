#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "myLib.h"

void insere_lista_fim(no **p, pessoa d){
	no *aux;
	aux = (no*) malloc (sizeof(no));
	aux->pessoa = d;
	aux->prox = *p;
	*p = aux;
}

void print_Lista(no **lista){
	no *aux;
	aux = *lista;
	while(aux){
		printf("%s\t%lld\t%d\n",aux -> pessoa.nome,aux -> pessoa.cpf, aux -> pessoa.idade );
		aux = aux -> prox;
	}

}