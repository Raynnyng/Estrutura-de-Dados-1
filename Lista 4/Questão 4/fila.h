#define MAX 100

struct cliente{
	char nome[30];
	char cpf[11];
};

typedef struct fila Fila;
typedef struct cliente Cliente;

Fila* criar_fila();

Cliente remover_cliente(Fila* fi);

void libera_fila(Fila* fi);

void imprimir_fila(Fila* fi);

void imprimir_cliente(struct cliente cl);

int inserir_cliente(Fila* fi, struct cliente cl);
