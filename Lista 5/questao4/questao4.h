//Referente a filas.

typedef struct cliente{									//Define o tipo cliente.
	char nome[50];
	int cpf;
}CLIENTE;

typedef struct lista LISTA;

void criaFila(LISTA *L);								//Inicializa a fila.
void inserirFila(LISTA *L, LISTA *novo);				//l é a cabeça da fila.
LISTA *removeFila(LISTA *L);							//l é a cabeça da fila.
void deletaFila(LISTA *l);								//l é a cabeça da fila.



