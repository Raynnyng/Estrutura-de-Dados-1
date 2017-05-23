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

void inserirPilha(LISTA *L, LISTA *novo){				//L � a cabe�a da pilha.
	LISTA *p = L;										//p recebe o endere�o da cabe�a.
	while(p->prox != NULL){								//Enquanto existir elemento ap�s o p.
		p = p->prox;									//percorre a pilha at� o ultimo elemento.
	}
	novo->prox = p->prox;								//O novo elemento apontar� para NULL.
	p->prox = novo;										//O elemento que era o ultimo da pilha, agora aponta para novo.
}

LISTA *removePilha(LISTA *L){							//L � a cabe�a da pilha.
	LISTA *p = L;										//p recebe o endere�o da cabe�a.
	LISTA *pp = NULL;
	if(p->prox == NULL){
		printf("A lista esta vazia.\n");
		return pp;
	}
	if(p->prox->prox != NULL){							//Se o pr�ximo elemento n�o for o ultimo.
		while(p->prox->prox != NULL){					//Enquando o pr�ximo elemento n�o for o ultimo.
			p = p->prox;								//percorre a pilha, at� que se chege no penultimo elemento.
		}
	}
	pp = p->prox;										//pp recebe o endere�o do ultimo elemento.
	p->prox = pp->prox;									//p aponta para o pr�ximo elemento do ultimo(NULL)
	
	return pp;											//o elemento removido � retornado.
}

void deletaPilha(LISTA *l){							//l � a cabe�a da pilha.
	LISTA *p = l;										//p recebe o endere�o da cabe�a.
	LISTA *pp = NULL; 					
	if(p->prox == NULL){								//Se n�o existir elemento p�s o p.
		printf("A lista esta vazia.");
	}
	while(p->prox != NULL){								//Enquanto existir elemento ap�s o p.
		pp = p->prox;									//pp recebe o endere�o apos p;
		p->prox = pp->prox;								//p aponta o endere�o posterior a p.
		free(pp);										//pp � removido da lista.
	}
}


