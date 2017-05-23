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

void inserirCircular(LISTA *L, ELEM *novo, int posicao){    //l � a cabe�a da lista
    ELEM *p = L->inicio;                                    //p recebe o endere�o da cabe�a.
    ELEM *pp = NULL;
    if(L->inicio == NULL){                                     //Se a lista for vazia.
        L->inicio = novo; 
        L->final = novo; 
        novo->prox = L->inicio;
    }
    if(posicao > 1 && L->tamanho > 0){                        //Se a posi��o for maior que 1 e a lista n�o for vazia.
        int i = 1;
        while(i < posicao-1 || p->prox != L->inicio){        //Percorre at� uma posi��o anterior a desejada.
            p = p->prox;
            i++;
        }
    if(L->final = p){                                        //se p for o ultimo elemento da lista.
        L->final = novo;                                    //lista final aponta para novo.
    }
    novo->prox = p->prox;                                    //novo aponta para o elemento.
    p->prox = novo;                                            //o elemento de posi��o anterior a desejada aponta para p.

    }
    else if(posicao = 1 && L->tamanho > 0){
        novo->prox = p->prox;                                //Novo aponta para o elemento.
        p->prox = novo;                                        //O elemento final aponta para p.
        L->inicio = novo;                                    //A cabe�a aponta para p.
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
int buscaCircular(LISTA *l, CLIENTE a){			//l � a cabeca da lista. a � o elemento a ser buscado.
	ELEM *p = l->inicio;									//p recebe o endere�o da cabe�a.
	int aux = 0;
	if(l->inicio!=NULL){								//Se existir elemento ap�s o p.
											//p recebe o endere�o do primeiro elemento da lista.
		aux++;										//aux � incrementado.
		while(!(!strcmp(p->c.nome, a.nome) && p->c.cpf == a.cpf)){	//enquando os dados n�o coincidirem.
				p=p->prox;						//p recebe o endere�o do elemento seguinte.
				aux ++;							//aux � incrementado..
			if(aux==l->tamanho)
				break;
			if(p==l->final){				//Se chegarmos no ultimo elemento da lista e nao acharmos, o metodo retornar� 0.
				aux=0;
				break;
				}
		}
	}
	else
		printf("A lista est� vazia");
	
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

