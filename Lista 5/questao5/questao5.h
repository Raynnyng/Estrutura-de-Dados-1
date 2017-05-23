//Referente a lista duplamente encadeada.

typedef struct cliente{    									//Define o tipo cliente.
    char nome[50];	
    int cpf;
}CLIENTE;
typedef struct lista LISTA;

void criaDupEncadeada(LISTA *L);						//Inicializa a lista.
void inserirDupEncadeada(LISTA *l, LISTA *c, int posicao);	//l é cabeça da lista. c elemento a ser adicionado. 
LISTA *removeDupEncadeada(LISTA *l, int posicao);        	//l é a cabeça da lista.
int buscaDupEncadeada(LISTA *l, CLIENTE c);			//l é a cabeca da lista. c é o elemento a ser buscado.
void mostraDupEncadeada(LISTA *L);				//l é a cabeça da lista.
void deletaDupEncadeada(LISTA *L);							//l é a cabeça da lista



