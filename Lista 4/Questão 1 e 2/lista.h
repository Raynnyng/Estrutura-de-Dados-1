#define MAX 100

struct cliente{
	char nome[30];
	char cpf[11];
};

typedef struct lista Lista;
typedef struct cliente Cliente;

Lista* criar_lista();

Cliente remover_cliente(Lista* li, int index);

void libera_lista(Lista* li);

void imprimir_lista(Lista* li);

void imprimir_cliente(struct cliente cl);

int inserir_cliente(Lista* li, struct cliente cl, int index);

int buscar(Lista* li, char cpf[]);
