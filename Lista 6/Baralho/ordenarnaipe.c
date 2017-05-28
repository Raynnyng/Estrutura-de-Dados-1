#include <stdio.h>
#include <stdlib.h>
#include "ordenarnaipe.h"
typedef struct baralho{
	CARTA c;
	struct baralho *prox;
}BARALHO;

void criaBaralho(BARALHO *B){
	B->prox = NULL;
}

int verificaBaralho(BARALHO *B, BARALHO *novo){
	BARALHO *p = B;
	if(p->prox != NULL){
		while(p->prox != NULL){
			p = p->prox;
			if(p->c.naipe == novo->c.naipe && p->c.num == novo->c.num){
				return 1;
			}
		}
	}
	return 0;
}


void inserirBaralho(BARALHO *B, BARALHO *novo){
	BARALHO *p = B;									//p recebe o endereço da cabeça do baralho.
	if(verificaBaralho(B, novo)){
		printf("A carta ja esta no baralho\n");
	}else{
		if(p->prox != NULL){							//Se existir elementos no baralho.
		while(novo->c.naipe > p->prox->c.naipe){	//Vai percorrer o baralho ate uma posição antes do naipe da carta.
			p = p->prox;

			if(p->prox == NULL){					//Se chegar no ultimo elemento da lista.
				break;
			}
		}
		if(p->prox == NULL || p->prox->c.naipe > novo->c.naipe){		//Se nao existir nenhuma carta do naipe da carta que se quer adicionar, ou se estiver chegado no final do baralho.
		
		}
		else{
			while(p->prox->c.num < novo->c.num && p->prox->c.naipe <= novo->c.naipe){	//Enquanto o proximo numero for menor do que o novo, e for do mesmo naipe.
				p = p->prox;
				if(p->prox == NULL){
					break;
				}
			}
		}
		
	novo->prox = p->prox;
	p->prox = novo;
	}else{
		novo->prox = p->prox;
		p->prox = novo;
	}
	}
}

void mostraBaralho(BARALHO *B){
	BARALHO *p = B;
	if(p->prox != NULL){							//Se existir elementos após o p.
		printf(".................BARALHO.................\n\n");
		while(p->prox != NULL){						//Enquanto existir elementos após o p.
			p = p->prox;							//Percorre a lista.
			printf("Numero da carta: %d\n", p->c.num);
			printf("Naipe da carta:	%d\n\n", p->c.naipe);
		}
	}else											//Se não existir elemento após o p.
		printf("A LISTA ESTA VAZIA.\n");
}
