#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.c"

Lista* cria_lista();
Lista* remove_inicio(Lista* li);
Lista* remover_com_index(Lista* li, int index);
int inserir_com_index(Lista* li, struct cliente cl, int index);

int main(){

	struct cliente c[8] = {{"Augusto","15341981"},
                           {"Mário","15341214"},
                           {"Cláudia","15321112"},
                           {"Ruth","15432911"},
                      	   {"Test","65325987"},
                      	   {"Test2","45465454"},
                      	   {"Test3","42365222"},
                      	   {"Test4","43651987"}};

	Lista* li = cria_lista();

	int i;
    for(i=0; i <= 4; i++)
        inserir_cliente(li, c[i], i);

	remover_cliente(li, 3);
	imprimir_lista(li);
	libera_lista(li);
	return 0;
}
