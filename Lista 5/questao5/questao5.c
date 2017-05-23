//Referente a lista duplamente encadeada.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao5.h"

typedef struct lista{    									//Define o tipo lista.
    CLIENTE c;
    struct lista *prox;
    struct lista *ant;
}LISTA;



void criaDupEncadeada(LISTA *L){						//Inicializa a lista.
    L->prox = NULL;
    L->ant = NULL;
}

void inserirDupEncadeada(LISTA *l, LISTA *c, int posicao){ 	//l � cabe�a da lista. c elemento a ser adicionado. 
    LISTA *p = l;                                        	//p recebe o endere�o da cabe�a.
    if(p->prox!=NULL){                                    	//Se existir elemento apos o p.
    int i = 0;
        for(i; i < posicao-1; i++){                        	//Queremos ir at� uma posi��o antes da desejada.
            p = p->prox;                            		//p recebe o endere�o do elemento seguinte.
            if(p->prox==NULL)                            	//Caso a lista seja menor que a posi��o desejada, inseriremos no final.
                break;
        }
    }
    c->ant = p;												//O elemento p � o anterior ao c.
    c->prox = p->prox;                                    	//c aponta para o elemento que estava na posi��o desejada.
    p->prox = c;                                        	//p(que � o elemento anterior a posi��o desejada) aponta para c.
}

LISTA *removeDupEncadeada(LISTA *l, int posicao){        	//l � a cabe�a da lista.
    LISTA *p = l;                             				//p recebe o endere�o da cabe�a.
    LISTA *pp = NULL;

    if(p->prox!= NULL){                        				//Se existir elemento apos o p.
        int i = 0;
        for(i=0; i < posicao-1; i++){        				//Queremos ir at� uma posi��o antes da desejada.
            p = p->prox;                    				//p recebe o endere�o do elemento seguinte.

            if(p->prox->prox==NULL)            				//se o elemento posterior a p aponta para NULL, paramos.
                break;
        }

        pp= p->prox;                            			//pp recebe o endere�o do elemento que queremos remover.
        p->prox = pp->prox;                        			//o elemento anterior aponta para o elemento posterior ao que queremos renmover.
        if(pp->prox!=NULL){
            p->prox->ant = p;
        }}
    return pp;                            					//o ponteiro "excluido" � retornado.
}

int buscaDupEncadeada(LISTA *l, CLIENTE c){			//l � a cabeca da lista. c � o elemento a ser buscado.
	LISTA *p = l;									//p recebe o endere�o da cabe�a.
	int aux = 0;
	if(p->prox!=NULL){								//Se existir elemento ap�s o p.
		p=p->prox;									//p recebe o endere�o do primeiro elemento da lista.
		aux++;										//aux � incrementado.
		while(!(!strcmp(p->c.nome, c.nome) && p->c.cpf == c.cpf)){	//enquando os dados n�o coincidirem.
			p=p->prox;								//p recebe o endere�o do elemento seguinte.
			aux ++;									//aux � incrementado..
				if(p==NULL){						//Se chegarmos no ultimo elemento da lista e nao acharmos, o metodo retornar� 0.
				aux=0;
				break;
				}
		}
	}
	else
	printf("A lista est� vazia");
	
	return aux;										//retorna a posi��o do elemento buscado.
}
void mostraDupEncadeada(LISTA *L){					//l � a cabe�a da lista.
	LISTA *p = L;									//p recebe o endere�o da cabe�a da lista.
	if(p->prox != NULL){							//Se existir elementos ap�s o p.
		printf(".................Dados do cliente.................\n\n");
		while(p->prox != NULL){						//Enquanto existir elementos ap�s o p.
			p = p->prox;							//Percorre a lista.
			printf("Nome do cliente: %s\n", p->c.nome);
			printf("Cpf do cliente:	%d\n\n", p->c.cpf);
		}
	}else											//Se n�o existir elemento ap�s o p.
		printf("A LISTA ESTA VAZIA.\n");
}

void deletaDupEncadeada(LISTA *L){								//l � a cabe�a da lista
    LISTA *p= L;									//p recebe o endere�o da cabe�a.
    LISTA *pp;
    if(p->prox!=NULL){								//Se existir elemento ap�s o p.
        while(p->prox!=NULL){						//Enquanto existir elemento apos o p.
            pp = p->prox;							//pp recebe o elemento a ser removido.
            p->prox = pp->prox;						//p aponta para o elemento posterior a pp.
            if(pp->prox!=NULL)						//Se pp aponta n�o para NULL.
                 pp->prox->ant = p;					//existira um elemento no qual o seu anterior � p.
            free(pp);								//pp � removido
        }
    }
    else											//Se n�o existir elemento ap�s o p.
        printf("A lista est� vazia\n");
}

