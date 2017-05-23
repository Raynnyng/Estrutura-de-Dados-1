#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questoes1,2.c"

int main(){
	LISTA *l = (LISTA *) malloc(sizeof(LISTA));
	criaLista(l);
	LISTA *p1 = (LISTA *) malloc(sizeof(LISTA));
	LISTA *p2 = (LISTA *) malloc(sizeof(LISTA));
	LISTA *p3 = (LISTA *) malloc(sizeof(LISTA));
	inserirEncadeada(l, p1, 1);
	inserirEncadeada(l, p2, 2);
	inserirEncadeada(l, p3, 3);
	//p1
	printf("Digite o nome do cliente: ");
	gets(p1->c.nome);
	fflush(stdin);
	printf("Digite o cpf do cliente: ");
	scanf("%d", &p1->c.cpf);
	fflush(stdin);
	//p2
	printf("Digite o nome do cliente: ");
	gets(p2->c.nome);
	fflush(stdin);
	printf("Digite o cpf do cliente: ");
	scanf("%d", &p2->c.cpf);
	fflush(stdin);
	//p3
	printf("Digite o nome do cliente: ");
	gets(p3->c.nome);
	fflush(stdin);
	printf("Digite o cpf do cliente: ");
	scanf("%d", &p3->c.cpf);
	fflush(stdin);
	mostraEncadeada(l);
	removeEncadeada(l, 1);
	printf("Apos a remocao.\n\n");
	mostraEncadeada(l);
	CLIENTE a;
	printf("Digite o nome do cliente a ser buscado: ");
	gets(a.nome);
	fflush(stdin);
	printf("Digite o cpf do usuario: ");
	scanf("%d", &a.cpf);
	printf("Posicao do cliente buscado %d\n", buscaEncadeada(l, a));
	destroiEncadeada(l);
	mostraEncadeada(l);

}
