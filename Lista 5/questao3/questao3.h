//Referente a pilhas.
typedef struct cliente{									//Define o tipo cliente.
	char nome[50];
	int cpf;
}CLIENTE;

typedef struct lista LISTA;

void criaPilha(LISTA *L);								//Inicializa a pilha.
void inserirPilha(LISTA *L, LISTA *novo);				//L é a cabeça da pilha.
LISTA *removePilha(LISTA *L);							//L é a cabeça 
void deletaPilha(LISTA *l);							//l é a cabeça 

