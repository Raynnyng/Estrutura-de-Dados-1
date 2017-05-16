#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.c"

Fila* cria_fila();

int main(){

	struct cliente c[8] = {{"Augusto","15341981"},
                           {"Mário","15341214"},
                           {"Cláudia","15321112"},
                           {"Ruth","15432911"},
                      	   {"Test","65325987"},
                      	   {"Test2","45465454"},
                      	   {"Test3","42365222"},
                      	   {"Test4","43651987"}};


	Fila* fi = cria_fila();

	int i;
    for(i=0; i < 4; i++)
        inserir_cliente(fi, c[i]);

	remover_cliente(fi);
	inserir_cliente(fi, c[5]);
	imprimir_fila(fi);
	libera_fila(fi);
	return 0;
}
