typedef struct judeu{									//Define o tipo cliente.
	char nome[50];
	int cpf;
}JUDEU;
typedef struct elemento ELEM;
typedef struct lista LISTA;

void criaCircular(LISTA *L);							//Inicializa a lista.
void inserirCircular(LISTA *L, ELEM *novo, int posicao);    //l é a cabeça da lista
ELEM *removeCircular(int posicao,LISTA *A);
void mostraCircular(LISTA *K);
LISTA* josephus(LISTA *K,int posicao);




