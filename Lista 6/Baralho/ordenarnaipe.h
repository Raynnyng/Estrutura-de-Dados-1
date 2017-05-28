
typedef struct carta{
	int naipe;	//1 = ouro; 2 = copas, 3 = espadas, 4 = paus;
	int num;
}CARTA;
typedef struct baralho BARALHO;
int verificaBaralho(BARALHO *B, BARALHO *novo);
void inserirBaralho(BARALHO *B, BARALHO *novo);
void mostraBaralho(BARALHO *B);

