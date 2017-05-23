#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cliente{									//Define o tipo cliente.
	char nome[50];
	int cpf;
}CLIENTE;
typedef struct lista LISTA;

void criaLista(LISTA *L);								//Inicializa 
void inserirEncadeada(LISTA *l, LISTA *c, int posicao); //l = cabe�a da lista. c elemento a ser adicionado
LISTA *removeEncadeada(LISTA *l, int posicao);		//l � a cabe�a da lista.
int buscaEncadeada(LISTA *l, CLIENTE c);			//l � a cabeca da lista. c � o  elemento a ser buscado.
void mostraEncadeada(LISTA *L);					//l � a cabeca da lista
void destroiEncadeada(LISTA *l);				//l � a cabe�a da lista.


