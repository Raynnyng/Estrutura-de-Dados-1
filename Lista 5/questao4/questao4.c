//Referente a filas.

#include <stdio.h>
#include <stdlib.h>
#include "questao4.h"


typedef struct lista{									//Define o tipo lista.
	CLIENTE c;
	struct lista *prox;
}LISTA;

void criaFila(LISTA *L){								//Inicializa a fila.
	L->prox = NULL;
}

void inserirFila(LISTA *L, LISTA *novo){				//l � a cabe�a da fila.
	LISTA *p = L;										//p recebe o endere�o da cabe�a.
	if(p->prox != NULL){								//Se existir elemento ap�s o p.
		while(p->prox != NULL){							//Enquanto existir elemento ap�s o p.
			p = p->prox;								//Percorre a fila.
		}
	}
	novo->prox = p->prox;								//Novo elemento aponta para onde o ultimo apontava.
	p->prox = novo;										//O penultimo elemento aponta para novo.
}

LISTA *removeFila(LISTA *L){							//l � a cabe�a da fila.
	LISTA *p = L;										//p recebe o endere�o da cabe�a.
	LISTA *pp = NULL;
	if(p->prox != NULL){								//Se existir elemento ap�s o p.
		pp = p->prox;									//pp recebe o endere�o a ser removido.
		p->prox = pp->prox;								//p aponta para o elemento a frente ao que ser� removido.
	}else{												//Se n�o existir elemento ap�s o p.
		printf("A lista esta vazia.\n");
	}
	
	return pp;											//Retorna o elemento que foi removido da fila.
	
}

void deletaFila(LISTA *l){								//l � a cabe�a da fila.
	LISTA *p = l;										//p recebe o endere�o da cabe�a.
	LISTA *pp = NULL; 					
	if(p->prox == NULL){								//Se n�o existir elemento p�s o p.
		printf("A lista esta vazia.\n");
	}
	while(p->prox != NULL){								//Enquanto existir elemento ap�s o p.
		pp = p->prox;									//pp recebe o endere�o apos p;
		p->prox = pp->prox;								//p aponta o endere�o posterior a p.
		free(pp);										//pp � removido da lista.
	}
}


