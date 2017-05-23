#include <stdio.h>
#include <stdlib.h>
#include "questao3.h"

typedef struct lista{									//Define o tipo lista.
	CLIENTE c;
	struct lista *prox;
}LISTA;

void criaPilha(LISTA *L){ 								//Inicializa a pilha.
	L->prox = NULL;
}

void inserirPilha(LISTA *L, LISTA *novo){				//L é a cabeça da pilha.
	LISTA *p = L;										//p recebe o endereço da cabeça.
	while(p->prox != NULL){								//Enquanto existir elemento após o p.
		p = p->prox;									//percorre a pilha até o ultimo elemento.
	}
	novo->prox = p->prox;								//O novo elemento apontará para NULL.
	p->prox = novo;										//O elemento que era o ultimo da pilha, agora aponta para novo.
}

LISTA *removePilha(LISTA *L){							//L é a cabeça da pilha.
	LISTA *p = L;										//p recebe o endereço da cabeça.
	LISTA *pp = NULL;
	if(p->prox == NULL){
		printf("A lista esta vazia.\n");
		return pp;
	}
	if(p->prox->prox != NULL){							//Se o próximo elemento não for o ultimo.
		while(p->prox->prox != NULL){					//Enquando o próximo elemento não for o ultimo.
			p = p->prox;								//percorre a pilha, até que se chege no penultimo elemento.
		}
	}
	pp = p->prox;										//pp recebe o endereço do ultimo elemento.
	p->prox = pp->prox;									//p aponta para o próximo elemento do ultimo(NULL)
	
	return pp;											//o elemento removido é retornado.
}

void deletaPilha(LISTA *l){							//l é a cabeça da pilha.
	LISTA *p = l;										//p recebe o endereço da cabeça.
	LISTA *pp = NULL; 					
	if(p->prox == NULL){								//Se não existir elemento pós o p.
		printf("A lista esta vazia.");
	}
	while(p->prox != NULL){								//Enquanto existir elemento após o p.
		pp = p->prox;									//pp recebe o endereço apos p;
		p->prox = pp->prox;								//p aponta o endereço posterior a p.
		free(pp);										//pp é removido da lista.
	}
}


