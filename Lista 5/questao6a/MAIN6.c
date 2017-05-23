#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao6.c"
int main(){
	LISTA *l = (LISTA *) malloc(sizeof(LISTA));
	criaCircular(l);
	ELEM *p1 = (ELEM *) malloc(sizeof(ELEM));
	ELEM *p2 = (ELEM *) malloc(sizeof(ELEM));
	ELEM *p3 = (ELEM *) malloc(sizeof(ELEM));
	inserirCircular(l, p1, 1);
	inserirCircular(l, p2, 2);
	inserirCircular(l, p3, 3);
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
	
	
	mostraCircular(l);
	removeCircular(1, l);
	printf("Apos remocao.\n\n");
	mostraCircular(l);
	CLIENTE a;
	printf("Digite o nome do cliente a ser buscado: ");
	gets(a.nome);
	fflush(stdin);
	printf("Digite o cpf do usuario: ");
	scanf("%d", &a.cpf);
	printf("Posicao do cliente buscado %d\n", buscaCircular(l, a));
	deletaCircular(l);
	mostraCircular(l);
}
