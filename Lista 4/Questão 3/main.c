#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.c"

Pilha* cria_pilha();

int main(){

	struct cliente c[8] = {{"Augusto","15341981"},
                           {"Mário","15341214"},
                           {"Cláudia","15321112"},
                           {"Ruth","15432911"},
                      	   {"Test","65325987"},
                      	   {"Test2","45465454"},
                      	   {"Test3","42365222"},
                      	   {"Test4","43651987"}};

	Pilha* pi = cria_pilha();

	int i;
    for(i=0; i < 4; i++)
        inserir_cliente(pi, c[i]);

    remover_cliente(pi);
  	remover_cliente(pi);
	inserir_cliente(pi, c[6]);
	printf("\n\n\n");
	imprimir_pilha(pi);
	libera_pilha(pi);
	return 0;
}
