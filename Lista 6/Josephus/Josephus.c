#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Josephus.h"

typedef struct elemento{								//Define o tipo elemento.
	JUDEU c;
	struct elemento *prox;
}ELEM;

typedef struct lista{									//Define o tipo lista.
	JUDEU c;
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
        
		if(posicao==1 && A->final== p){
			A->final= NULL;
			A->inicio = NULL;}
			
		else if(posicao==1){
			pp=p;
			A->inicio = p->prox;
		}
		else{
        	pp= p->prox;
			if(pp == A->final && pp== A->inicio){
				A->inicio = NULL;
				A->final = NULL; }
        	else if(pp == A->final)
            	pp->prox = A->inicio;
        	p->prox = pp->prox;
			 }
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
            printf("Dados do Judeu: \n");
            printf("nome: %s\n", p->c.nome);
            printf("Cpf: %d\n\n", p->c.cpf);
             p = p->prox;
            i++;
        }//fim do while
    }//fim do else
}		

LISTA* josephus(LISTA *K,int posicao){
	int i=0;
	if(K->inicio!=NULL){
		int x=posicao+3;
		if(x >K->tamanho){
			x= x- K->tamanho;
		}
		while(K->tamanho!=1){
			if(K->tamanho<x)
				x = x-K->tamanho;
			
			else{
				
				removeCircular(x,K);
				if(K->tamanho!=1){
					printf("o circulo depois do suicidio esta assim:\n  ");
					mostraCircular(K);
					printf("-----------------------------------------------------------------\n");
					x++;
					x++;}
		 }
		}
		printf("O ultimo a ficar vivo eh Josephus que era o : \n");
		return K;
		
	}	
}

