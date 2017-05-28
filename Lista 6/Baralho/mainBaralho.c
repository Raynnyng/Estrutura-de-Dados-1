#include <stdio.h>
#include <stdlib.h>
#include "ordenarnaipe.c"
int main(){
	BARALHO *B = (BARALHO *) malloc(sizeof(BARALHO));
	BARALHO *carta1 = (BARALHO *) malloc(sizeof(BARALHO));
	BARALHO *carta2 = (BARALHO *) malloc(sizeof(BARALHO));
	BARALHO *carta3 = (BARALHO *) malloc(sizeof(BARALHO));
	criaBaralho(B);
	mostraBaralho(B);
	
	printf("..................INSTRUCOES..................\n");
	printf("Numero das cartas:\n1 para AS, 11 para J, 12 para Q e 13 para K.\n\n");
	printf("Naipe das cartas:\n1 para Ouro, 2 para Copas, 3 para Espadas e 4 para Paus\n\n");
	printf("..................INICIO..................\n");
	//carta1
	printf("Digite o numero de sua carta: ");
	scanf("%d", &carta1->c.num);
	fflush(stdin);
	printf("Digite o naipe de sua carta: ");
	scanf("%d", &carta1->c.naipe);
	fflush(stdin);
	inserirBaralho(B, carta1);
	mostraBaralho(B);
	//carta2
	printf("Digite o numero de sua carta: ");
	scanf("%d", &carta2->c.num);
	fflush(stdin);
	printf("Digite o naipe de sua carta: ");
	scanf("%d", &carta2->c.naipe);
	fflush(stdin);
	inserirBaralho(B, carta2);
	mostraBaralho(B);
	//carta3
	printf("Digite o numero de sua carta: ");
	scanf("%d", &carta3->c.num);
	fflush(stdin);
	printf("Digite o naipe de sua carta: ");
	scanf("%d", &carta3->c.naipe);
	fflush(stdin);
	
	inserirBaralho(B, carta3);
	mostraBaralho(B);
	
	
	
}
