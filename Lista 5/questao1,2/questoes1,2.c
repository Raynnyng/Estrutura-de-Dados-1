#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaencadeada.h"

typedef struct lista{									//Define o tipo lista.
	CLIENTE c;
	struct lista *prox;
}LISTA;

void criaLista(LISTA *L){								//Inicializa a lista.
	L->prox = NULL;
}

void inserirEncadeada(LISTA *l, LISTA *c, int posicao){ //l = cabeça da lista. c elemento a ser adicionado.
	LISTA *p = l;										//p recebe o endereço da cabeça.
	if(p->prox!=NULL){									//Se existir elemento após o p.
	int i = 0;
		for(i; i < posicao-1; i++){						//Queremos ir até uma posição antes da desejada.
			p = p->prox; 								//p recebe o endereço do elemento seguinte.
			if(p->prox==NULL)							//Caso a lista seja menor que a posição desejada, inseriremos no final.
				break;
		}
	}
	c->prox = p->prox;									//c aponta para o elemento que estava na posição desejada
	p->prox = c;										//p(que é o elemento anterior a posição desejada) aponta para c.
}


LISTA *removeEncadeada(LISTA *l, int posicao){		//l é a cabeça da lista.
	LISTA *p = l; 									//p recebe o endereço da cabeça.
	LISTA *pp = NULL;

	if(p->prox!= NULL){								//Se existir elemento apos o p.
	int i;
		for(i=0; i < posicao-1; i++){				//Queremos ir até uma posição antes da desejada.
			p = p->prox;							//p recebe o endereço do elemento seguinte.

			if(p->prox->prox==NULL)					//se o elemento posterior a p aponta para NULL, paramos.
				break;
		}
	pp= p->prox;									//pp recebe o endereço do elemento que queremos remover.
	p->prox = pp->prox;								//o elemento anterior aponta para o elemento posterior ao que queremos renmover.
	}
	return pp;										//o ponteiro "excluido" é retornado.
}

int buscaEncadeada(LISTA *l, CLIENTE c){			//l é a cabeca da lista. c é o elemento a ser buscado.
	LISTA *p = l;									//p recebe o endereço da cabeça.
	int aux = 0;
	if(p->prox!=NULL){								//Se existir elemento após o p.
		p=p->prox;									//p recebe o endereço do primeiro elemento da lista.
		aux++;										//aux é incrementado.
		while(!(!strcmp(p->c.nome, c.nome) && p->c.cpf == c.cpf)){	//enquando os dados não coincidirem.
			p=p->prox;						//p recebe o endereço do elemento seguinte.
			aux ++;							//aux é incrementado..
				if(p==NULL){				//Se chegarmos no ultimo elemento da lista e nao acharmos, o metodo retornará 0.
				aux=0;
				break;
				}
		}
	}
	else
	printf("A lista está vazia");

	return aux;
}


void mostraEncadeada(LISTA *L){						//l é a cabeça da lista.
	LISTA *p = L;									//p recebe o endereço da cabeça da lista.
	if(p->prox != NULL){							//Se existir elementos após o p.
		printf(".................Dados do cliente.................\n\n");
		while(p->prox != NULL){						//Enquanto existir elementos após o p.
			p = p->prox;							//Percorre a lista.
			printf("Nome do cliente: %s\n", p->c.nome);
			printf("Cpf do cliente:	%d\n\n", p->c.cpf);
		}
	}else											//Se não existir elemento após o p.
		printf("A LISTA ESTA VAZIA.\n");
}


void destroiEncadeada(LISTA *l){					//l é a cabeça da lista.
	LISTA *p = l;									//p recebe o endereço da cabeça.
	LISTA *pp = NULL;
	if(p->prox == NULL){							//Se não existir elemento pós o p.
		printf("A lista esta vazia.");
	}
	while(p->prox != NULL){							//Enquanto existir elemento após o p.
		pp = p->prox;								//pp recebe o endereço apos p;
		p->prox = pp->prox;							//p aponta o endereço posterior a p.
		free(pp);									//pp é removido da lista.
	}
}
