#include <stdio.h>
#include <stdlib.h>
#include "questao4.c"



int main(){
	LISTA *L = (LISTA *) malloc(sizeof(LISTA));
	LISTA *p1 = (LISTA *) malloc(sizeof(LISTA));
	LISTA *p2 = (LISTA *) malloc(sizeof(LISTA));
	LISTA *p3 = (LISTA *) malloc(sizeof(LISTA));
	criaFila(L);
	//p1
	printf("Digite o nome do cliente: ");
	gets(p1->c.nome);
	fflush(stdin);
	printf("Digite o cpf do cliente: ");
	scanf("%d", &p1->c.cpf);
	fflush(stdin);
	printf("\n");
	//p2
	printf("Digite o nome do cliente: ");
	gets(p2->c.nome);
	fflush(stdin);
	printf("Digite o cpf do cliente: ");
	scanf("%d", &p2->c.cpf);
	fflush(stdin);
	printf("\n");
	//p3
	printf("Digite o nome do cliente: ");
	gets(p3->c.nome);
	fflush(stdin);
	printf("Digite o cpf do cliente: ");
	scanf("%d", &p3->c.cpf);
	fflush(stdin);
	printf("\n");
	inserirFila(L, p1);
	inserirFila(L, p2);
	inserirFila(L, p3);
	removeFila(L);
	deletaFila(L);
}
