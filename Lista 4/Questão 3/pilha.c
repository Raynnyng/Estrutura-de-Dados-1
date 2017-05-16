
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

struct pilha{
	int qtd;
	struct cliente dados[MAX];
};

//cria uma pilha

Pilha* cria_pilha(){

	Pilha *pi;

	pi = (Pilha*) malloc(sizeof(struct pilha));
	if(pi != NULL){
		pi->qtd = 0;
	}
	return pi;
}

//libera a pilha

void libera_pilha(Pilha* pi){
	free(pi);
}


//imprime toda a pilha

void imprimir_pilha(Pilha* pi){
	if(pi == NULL){
		return;
	}
	int i;
	for(i=0; i<pi->qtd; i++){
		printf("Index: %d\n", i);
		printf("Nome: %s\n", pi->dados[i].nome);
		printf("CPF: %s\n", pi->dados[i].cpf);
		printf("---------------------------\n");
	}
	if(pi->qtd > 0){
		printf("Quantidade de Clientes: %d\n", pi->qtd);
		return;
	}
	printf("Pilha vazia!\n");
}

//imprime cliente

void imprimir_cliente(struct cliente cl){
	printf("Nome: %s\n", cl.nome);
	printf("CPF: %s\n", cl.cpf);
	printf("---------------------------\n");
}

//remove cliente pelo indice

Cliente remover_cliente(Pilha* pi /*, int index*/){

	int i,k;
	struct cliente cli = pi->dados[0];

	//imprime o cliente q sera removido

	printf("CLIENTE REMOVIDO \n");
	imprimir_cliente(pi->dados[pi->qtd-1]);

	pi->qtd--;
	return cli;
}

//insere numa determinada posicao da pilha

int inserir_cliente(Pilha* pi, struct cliente cl){
	int i,k;
  	if(pi == NULL){
		return 0;
	}
	if(pi->qtd == MAX){
		return 0;
	}

	pi->dados[pi->qtd] = cl;
	pi->qtd++;
	return 1;
}
