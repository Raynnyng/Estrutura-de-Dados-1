#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Josephus.c"
int main(){
	LISTA *l = (LISTA *) malloc(sizeof(LISTA));
	criaCircular(l);
	ELEM *p1 = (ELEM *) malloc(sizeof(ELEM));
	ELEM *p2 = (ELEM *) malloc(sizeof(ELEM));
	ELEM *p3 = (ELEM *) malloc(sizeof(ELEM));
	ELEM *p4 = (ELEM *) malloc(sizeof(ELEM));
	ELEM *p5 = (ELEM *) malloc(sizeof(ELEM));
	ELEM *p6 = (ELEM *) malloc(sizeof(ELEM));
	inserirCircular(l, p1, 1);
	inserirCircular(l, p2, 2);
	inserirCircular(l, p3, 3);
	inserirCircular(l, p4, 4);
	inserirCircular(l, p5, 5);
	inserirCircular(l, p6, 6);
	//p1
	printf("Digite o nome do Judeu: ");
	gets(p1->c.nome);
	fflush(stdin);
	printf("Digite o cpf do Judeu: ");
	scanf("%d", &p1->c.cpf);
	fflush(stdin);
	//p2
	printf("Digite o nome do Judeu: ");
	gets(p2->c.nome);
	fflush(stdin);
	printf("Digite o cpf do Judeu: ");
	scanf("%d", &p2->c.cpf);
	fflush(stdin);
	//p3
	printf("Digite o nome do Judeu: ");
	gets(p3->c.nome);
	fflush(stdin);
	printf("Digite o cpf do Judeu: ");
	scanf("%d", &p3->c.cpf);
	fflush(stdin);
	//p4
	printf("Digite o nome do Judeu: ");
	gets(p4->c.nome);
	fflush(stdin);
	printf("Digite o cpf do Judeu: ");
	scanf("%d", &p4->c.cpf);
	fflush(stdin);
	//p5
	printf("Digite o nome do Judeu: ");
	gets(p5->c.nome);
	fflush(stdin);
	printf("Digite o cpf do Judeu: ");
	scanf("%d", &p5->c.cpf);
	fflush(stdin);
	//p6
	printf("Digite o nome do Judeu: ");
	gets(p6->c.nome);
	fflush(stdin);
	printf("Digite o cpf do Judeu: ");
	scanf("%d", &p6->c.cpf);
	fflush(stdin);
	
	mostraCircular(l);
	mostraCircular(josephus(l,2));
	printf("Apos toda essa matematica Josephus foi levado pelos romanos e foi torturado ate morrer\n FIM \n");
}
