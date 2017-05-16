#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

struct lista{
	int qtd;
	struct cliente dados[MAX];

};

//cria uma lista vazia

Lista* cria_lista(){

	Lista *li;

li = (Lista*) malloc(sizeof(struct lista));
if(li != NULL){
	li->qtd = 0;
	}
	return li;
}

//libera a lista

void libera_lista(Lista* li){
	free(li);
}


//imprime toda a lista

void imprimir_lista(Lista* li){
	if(li == NULL){
		return;
	}
	int i;
	for(i=0; i<li->qtd; i++){
		printf("Index: %d\n", i);
		printf("Nome: %s\n", li->dados[i].nome);
		printf("CPF: %s\n", li->dados[i].cpf);
		printf("---------------------------\n");
}
	if(li->qtd > 0){
		printf("Quantidade de Clientes: %d\n", li->qtd);
		return;
	}
	printf("Lista vazia!\n");
}

//imprime cliente

void imprimir_cliente(struct cliente cl){
  printf("Nome: %s\n", cl.nome);
	printf("CPF: %s\n", cl.cpf);
  	printf("---------------------------\n\n\n");
}

//remove cliente pelo indice

Cliente remover_cliente(Lista* li, int index){

int i,k;

struct cliente cli = li->dados[index];
	if(index > li->qtd){
		printf("Clietne não pertence a lista\n");
	return cli;
	}
	//imprime o cliente q sera removido
  printf("Cliente removido: \n");
	imprimir_cliente(li->dados[index]);

	for(i=index; i<li->qtd; i++){
		li->dados[i] = li->dados[i+1];
	}

	li->qtd--;
	return cli;
}

//insere numa determinada posicao da lista

int inserir_cliente(Lista* li, struct cliente cl, int index){
	int i,k;
	if(li == NULL){
		return 0;
	}
	if(li->qtd == MAX){
		return 0;
	}

	for(i=0; i<li->qtd; i++){
	if(i == index){
		for(k=li->qtd; k >= index; k--){
				li->dados[k+1] = li->dados[k];
			}
		}
	}

	li->dados[index] = cl;
	li->qtd++;
	return 1;
}

//busca cliente na lista

int buscar(Lista* li, char cpf[]){
	int i;

	for(i=0; i<=li->qtd; i++){
		// printf("%s\n", li->dados[i].cpf);
		// printf("%s\n", cpf);
		if(strcmp(li->dados[i].cpf, cpf) == 0){

		return i;
  	}
	}
	printf("Não está na lista\n");
	return -1;
}
