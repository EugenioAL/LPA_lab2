#ifndef _myLib
#define _myLib

int TAM;

struct dados
{
	char nome[50];
	int idade;
	long long int cpf;
};

typedef struct dados pessoa;

typedef struct no
{
	pessoa pessoa;
	struct no *prox;
}no;


//###########################################hash########################################################
void inicializandoHash(no *lista_hash[],int tam);

void print_Hash(no *lista_hash[],int tam);

int func_Hash(long long int cpf, int tam);

void fill_hash(char *arq, no *lista_hash[], int tam);



//##########################################lista##################################################

void insere_lista_fim(no **lista, pessoa dado);

void print_Lista(no **lista);

#endif