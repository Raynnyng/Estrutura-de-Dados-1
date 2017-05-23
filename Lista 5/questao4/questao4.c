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

void inserirFila(LISTA *L, LISTA *novo){				//l é a cabeça da fila.
	LISTA *p = L;										//p recebe o endereço da cabeça.
	if(p->prox != NULL){								//Se existir elemento após o p.
		while(p->prox != NULL){							//Enquanto existir elemento após o p.
			p = p->prox;								//Percorre a fila.
		}
	}
	novo->prox = p->prox;								//Novo elemento aponta para onde o ultimo apontava.
	p->prox = novo;										//O penultimo elemento aponta para novo.
}

LISTA *removeFila(LISTA *L){							//l é a cabeça da fila.
	LISTA *p = L;										//p recebe o endereço da cabeça.
	LISTA *pp = NULL;
	if(p->prox != NULL){								//Se existir elemento após o p.
		pp = p->prox;									//pp recebe o endereço a ser removido.
		p->prox = pp->prox;								//p aponta para o elemento a frente ao que será removido.
	}else{												//Se não existir elemento após o p.
		printf("A lista esta vazia.\n");
	}
	
	return pp;											//Retorna o elemento que foi removido da fila.
	
}

void deletaFila(LISTA *l){								//l é a cabeça da fila.
	LISTA *p = l;										//p recebe o endereço da cabeça.
	LISTA *pp = NULL; 					
	if(p->prox == NULL){								//Se não existir elemento pós o p.
		printf("A lista esta vazia.\n");
	}
	while(p->prox != NULL){								//Enquanto existir elemento após o p.
		pp = p->prox;									//pp recebe o endereço apos p;
		p->prox = pp->prox;								//p aponta o endereço posterior a p.
		free(pp);										//pp é removido da lista.
	}
}


