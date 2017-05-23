typedef struct cliente{									//Define o tipo cliente.
	char nome[50];
	int cpf;
}CLIENTE;
typedef struct elemento ELEM;
typedef struct lista LISTA;

void criaCircular(LISTA *L);							//Inicializa a lista.
void inserirCircular(LISTA *L, ELEM *novo, int posicao);    //l � a cabe�a da lista
ELEM *removeCircular(int posicao,LISTA *A);
void mostraCircular(LISTA *K);
void deletaCircular(LISTA *K);
int buscaCircular(LISTA *l, CLIENTE a);		//l � a cabeca da lista. a � o elemento a ser buscado.



