#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao6.h"

typedef struct elemento{								//Define o tipo elemento.
	CLIENTE c;
	struct elemento *prox;
}ELEM;

typedef struct lista{									//Define o tipo lista.
	CLIENTE c;
	ELEM *inicio;
	ELEM *final;
	int tamanho;
}LISTA;

void criaCircular(LISTA *L){							//Inicializa a lista.
	L->tamanho = 0;
	L->inicio = NULL;
	L->final = NULL;
}

void inserirCircular(LISTA *L, ELEM *novo, int posicao){    //l é a cabeça da lista
    ELEM *p = L->inicio;                                    //p recebe o endereço da cabeça.
    ELEM *pp = NULL;
    if(L->inicio == NULL){                                     //Se a lista for vazia.
        L->inicio = novo; 
        L->final = novo; 
        novo->prox = L->inicio;
    }
    if(posicao > 1 && L->tamanho > 0){                        //Se a posição for maior que 1 e a lista não for vazia.
        int i = 1;
        while(i < posicao-1 || p->prox != L->inicio){        //Percorre até uma posição anterior a desejada.
            p = p->prox;
            i++;
        }
    if(L->final = p){                                        //se p for o ultimo elemento da lista.
        L->final = novo;                                    //lista final aponta para novo.
    }
    novo->prox = p->prox;                                    //novo aponta para o elemento.
    p->prox = novo;                                            //o elemento de posição anterior a desejada aponta para p.

    }
    else if(posicao = 1 && L->tamanho > 0){
        novo->prox = p->prox;                                //Novo aponta para o elemento.
        p->prox = novo;                                        //O elemento final aponta para p.
        L->inicio = novo;                                    //A cabeça aponta para p.
    }
    L->tamanho ++;
}
	
ELEM *removeCircular(int posicao,LISTA *A){ 
    ELEM *p = A->inicio; 
    ELEM *pp = NULL;
    if(posicao > A->tamanho){
        printf("Essa posicao nao existe\n");
    }
    else if(p!=NULL){ 
        int i=1;
        while(posicao-1>i){
            p = p->prox;
            i++;}
		if(posicao==1){
			pp=p;
			A->inicio = p->prox;
		}
		else{
        	pp= p->prox; 
        	if(pp == A->final)
            	pp->prox = A->inicio;
        	p->prox = pp->prox; }
        A->tamanho--;
        return pp;

    }return pp; 
}

void mostraCircular(LISTA *K){
    ELEM *p = K->inicio;
    if(p == NULL)
        printf("A LISTA ESTA VAZIA");
    else{
        int i=0;
        while(i < K->tamanho){
            printf("Dados do cliente: \n");
            printf("nome: %s\n", p->c.nome);
            printf("Cpf: %d\n\n", p->c.cpf);
             p = p->prox;
            i++;
        }//fim do while
    }//fim do else
}		
int buscaCircular(LISTA *l, CLIENTE a){			//l é a cabeca da lista. a é o elemento a ser buscado.
	ELEM *p = l->inicio;									//p recebe o endereço da cabeça.
	int aux = 0;
	if(l->inicio!=NULL){								//Se existir elemento após o p.
											//p recebe o endereço do primeiro elemento da lista.
		aux++;										//aux é incrementado.
		while(!(!strcmp(p->c.nome, a.nome) && p->c.cpf == a.cpf)){	//enquando os dados não coincidirem.
				p=p->prox;						//p recebe o endereço do elemento seguinte.
				aux ++;							//aux é incrementado..
			if(aux==l->tamanho)
				break;
			if(p==l->final){				//Se chegarmos no ultimo elemento da lista e nao acharmos, o metodo retornará 0.
				aux=0;
				break;
				}
		}
	}
	else
		printf("A lista está vazia");
	
	return aux;
}
void deletaCircular(LISTA *K){
    ELEM *p = K->inicio;
    ELEM *pp = NULL;
    if(p != NULL){
		while(p->prox != K->inicio){
    		pp = p;
    		p = p->prox;
    		free(pp);
		}
    K->inicio = NULL;
	K->final = NULL;
	free(p);
	}else
	printf("Lista esta vazia.\n");
		
}

