//Referente a pilhas.
typedef struct cliente{									//Define o tipo cliente.
	char nome[50];
	int cpf;
}CLIENTE;

typedef struct lista LISTA;

void criaPilha(LISTA *L);								//Inicializa a pilha.
void inserirPilha(LISTA *L, LISTA *novo);				//L � a cabe�a da pilha.
LISTA *removePilha(LISTA *L);							//L � a cabe�a 
void deletaPilha(LISTA *l);							//l � a cabe�a 

