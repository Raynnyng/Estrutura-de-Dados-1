//Referente a lista duplamente encadeada.

typedef struct cliente{    									//Define o tipo cliente.
    char nome[50];	
    int cpf;
}CLIENTE;
typedef struct lista LISTA;

void criaDupEncadeada(LISTA *L);						//Inicializa a lista.
void inserirDupEncadeada(LISTA *l, LISTA *c, int posicao);	//l � cabe�a da lista. c elemento a ser adicionado. 
LISTA *removeDupEncadeada(LISTA *l, int posicao);        	//l � a cabe�a da lista.
int buscaDupEncadeada(LISTA *l, CLIENTE c);			//l � a cabeca da lista. c � o elemento a ser buscado.
void mostraDupEncadeada(LISTA *L);				//l � a cabe�a da lista.
void deletaDupEncadeada(LISTA *L);							//l � a cabe�a da lista



