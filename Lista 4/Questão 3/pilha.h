#define MAX 100

struct cliente{
	char nome[30];
	char cpf[11];
};

typedef struct pilha Pilha;
typedef struct cliente Cliente;

Pilha* criar_pilha();

Cliente remover_cliente(Pilha* pi/*, int index*/);

void libera_pilha(Pilha* pi);

void imprimir_pilha(Pilha* pi);

void imprimir_cliente(struct cliente cl);

int inserir_cliente(Pilha* pi, struct cliente cl);
