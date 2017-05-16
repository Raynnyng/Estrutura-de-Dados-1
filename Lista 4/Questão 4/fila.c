#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

struct fila{
	int qtd;
	struct cliente dados[MAX];

};

//cria uma fila vazia

Fila* cria_fila(){

	Fila *fi;

	fi = (Fila*) malloc(sizeof(struct fila));
	if(fi != NULL){
		fi->qtd = 0;
	}
	return fi;
}

//libera a fila

void libera_fila(Fila* fi){
	free(fi);
}

//imprime toda a fila

void imprimir_fila(Fila* fi){
	if(fi == NULL){
		return;
	}
	int i;
	for(i=0; i<fi->qtd; i++){
		printf("Index: %d\n", i);
		printf("Nome: %s\n", fi->dados[i].nome);
		printf("CPF: %s\n", fi->dados[i].cpf);
		printf("---------------------------\n");
	}
	if(fi->qtd > 0){
		printf("Quantidade de Clientes: %d\n", fi->qtd);
		return;
	}
	printf("Fila vazia!\n");
}

//imprime cliente

void imprimir_cliente(struct cliente cl){
	printf("Nome: %s\n", cl.nome);
	printf("CPF: %s\n", cl.cpf);
	printf("---------------------------\n\n\n");
}


//remove cliente pelo indice

Cliente remover_cliente(Fila* fi){

	int i,k;

	struct cliente cli = fi->dados[0];

	//imprime o cliente q sera removido
	printf("Cliente removido: \n");
	imprimir_cliente(fi->dados[0]);

	for(i=0; i<fi->qtd; i++){
		fi->dados[i] =fi->dados[i+1];
	}

	fi->qtd--;
	return cli;
}

//insere numa determinada posicao da fila

int inserir_cliente(Fila* fi, struct cliente cl){
	int i,k;
	if(fi == NULL){
		return 0;
	}
	if(fi->qtd == MAX){
		return 0;
	}

	fi->dados[fi->qtd] = cl;
	fi->qtd++;
	return 1;
}
