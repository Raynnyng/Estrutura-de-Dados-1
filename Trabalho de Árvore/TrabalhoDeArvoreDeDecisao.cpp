#include <stdio.h>
#include <stdlib.h>


struct NO{
	int info;					//O que o meu n� guarda
	char letra;					// Guarda um nome
	struct NO *esq;				//Um ponteiro para um n� a esquerda
	struct NO *dir;				//Um ponteiro para um n� a direita

};

typedef struct NO* ArvBin;			//Apelido da raiz ("Como se fosse a cabe�a de uma lista encadeada")

void libera_NO(struct NO* no);		//Prot�tipo dos m�todos auxiliares.
void libera_ArvBin(ArvBin* raiz);

					/*****	*****		M�todos da �rvore de decis�o	*****	*****/
ArvBin* criacaoDeUmaArvoreBinariaVazia(){
	ArvBin* raiz = (ArvBin*) malloc(sizeof(ArvBin));	//Aloca mem�ria para um elemento. Este elemento ser� a cabe�a, a ra�z.
	if(raiz != NULL)									//se deu tudo ok na cria��o
		*raiz = NULL;									//Como a �rvore inicialmente n�o tem nenhum elemento, faz a ra�z apontar para NULL.
	return raiz;
}


void libera_ArvBin(ArvBin* raiz){
	if(raiz == NULL)									//Se a minha raiz nem se quer existe n�o h� nada o que fazer.
		return;
	libera_NO(*raiz);									//Vai liberar cada n� da �rvore. Eu passei a minha ra�z para que eu possa percorrer seus filhos.
	free(raiz);											//depois de liberar todos os n�s, agora finalmente libera esse ponteiro especial.
}


					/*****	*****		M�todos auxiliares �rvore de decis�o	*****	*****/
void libera_NO(struct NO* no){							//Vai percorrer todos os n�s de uma �rvore
	if(no == NULL)										//se o n� inicial (pai de todo mundo) � nulo, ent�o n�o h� nada o que fazer.
		return;
	libera_NO(no->esq);									//Vai percorrendo a esquerda o m�ximo que puder. Chegou no limite, libera. Depois ele vai voltar para seu pai. Agora vai pela direita e a esquerda at� onde puder. Se n�o tiver mais esquerdas libera a direita. Se n�o tiver mais filhos libera o pai. E assim por diante.
	libera_NO(no->dir);									//Ver imagem para mais detalhes
	free(no);
	no = NULL;
}


struct NO *newNo(char letra){
    struct NO* novo;
    novo = (struct NO*) malloc(sizeof(struct NO));;
    novo->letra = letra;
    novo->dir = novo->esq = NULL;
    return novo;
}

struct NO *newNode1(char letra){
  	struct NO *NewNo;
    NewNo = (struct NO*) malloc(sizeof(struct NO));;
    NewNo->info = 1;
    NewNo->letra = letra;
    NewNo->dir = NewNo->esq = NULL;
    return NewNo;

}

struct NO *newNode0(char letra){
   	struct NO* NewNo = (struct NO*) malloc(sizeof(struct NO));;
    NewNo->info = 0;
    NewNo->letra = letra;

    NewNo->dir = NewNo->esq = NULL;

     return NewNo;
}

struct NO* CriarArvoreDecisao(struct NO *raiz, int level, char *rotulos){

int cont = 0;

	//level 1
	if(cont < level){
		raiz->esq = newNode0(rotulos[0]);
		raiz->dir = newNode1(rotulos[0]);
		cont++;
	}

	//level 2
	if(cont < level){
		raiz->esq->esq=newNode1(rotulos[1]);
		raiz->esq->dir=newNode0(rotulos[1]);

		raiz->dir->esq=newNode1(rotulos[1]);
		raiz->dir->dir=newNode0(rotulos[1]);
		cont++;
	}

	//level 3
	if(cont < level){
		raiz->esq->esq->esq=newNode1(rotulos[2]);
		raiz->esq->esq->dir=newNode0(rotulos[2]);

		raiz->esq->dir->dir=newNode0(rotulos[2]);
		raiz->esq->dir->esq=newNode1(rotulos[2]);

		raiz->dir->esq->esq=newNode1(rotulos[2]);
		raiz->dir->esq->dir=newNode0(rotulos[2]);

		raiz->dir->dir->esq=newNode1(rotulos[2]);
		raiz->dir->dir->dir=newNode0(rotulos[2]);
		cont++;
	}


	 //level 4
	if(cont < level){
		raiz->esq->esq->esq->esq=newNode1(rotulos[3]);
		raiz->esq->esq->esq->dir=newNode0(rotulos[3]);

		raiz->esq->esq->dir->esq=newNode1(rotulos[3]);
		raiz->esq->esq->dir->dir=newNode0(rotulos[3]);

		raiz->esq->dir->dir->esq=newNode1(rotulos[3]);
		raiz->esq->dir->dir->dir=newNode0(rotulos[3]);

		raiz->esq->dir->esq->esq=newNode1(rotulos[3]);
		raiz->esq->dir->esq->dir=newNode0(rotulos[3]);

		raiz->dir->esq->esq->esq=newNode1(rotulos[3]);
		raiz->dir->esq->esq->dir=newNode0(rotulos[3]);

		raiz->dir->esq->dir->esq=newNode1(rotulos[3]);
		raiz->dir->esq->dir->dir=newNode0(rotulos[3]);

		raiz->dir->dir->esq->esq=newNode1(rotulos[3]);
		raiz->dir->dir->esq->dir=newNode0(rotulos[3]);

		raiz->dir->dir->dir->esq=newNode1(rotulos[3]);
		raiz->dir->dir->dir->dir=newNode0(rotulos[3]);
		cont++;
	}

	 //level 5
	if(cont < level){
		raiz->esq->esq->esq->esq->esq=newNode1(rotulos[4]);
		raiz->esq->esq->esq->esq->dir=newNode0(rotulos[4]);

		raiz->esq->esq->esq->dir->esq=newNode1(rotulos[4]);
		raiz->esq->esq->esq->dir->dir=newNode0(rotulos[4]);

		raiz->esq->esq->dir->esq->esq=newNode1(rotulos[4]);
		raiz->esq->esq->dir->esq->dir=newNode0(rotulos[4]);

		raiz->esq->esq->dir->dir->esq=newNode1(rotulos[4]);
		raiz->esq->esq->dir->dir->dir=newNode0(rotulos[4]);

		raiz->esq->dir->dir->esq->esq=newNode1(rotulos[4]);
		raiz->esq->dir->dir->esq->dir=newNode0(rotulos[4]);

		raiz->esq->dir->dir->dir->esq=newNode1(rotulos[4]);
		raiz->esq->dir->dir->dir->dir=newNode0(rotulos[4]);

		raiz->esq->dir->esq->esq->esq=newNode1(rotulos[4]);
		raiz->esq->dir->esq->esq->dir=newNode0(rotulos[4]);

		raiz->esq->dir->esq->dir->esq=newNode1(rotulos[4]);
		raiz->esq->dir->esq->dir->dir=newNode0(rotulos[4]);

		raiz->dir->esq->esq->esq->esq=newNode1(rotulos[4]);
		raiz->dir->esq->esq->esq->dir=newNode0(rotulos[4]);

		raiz->dir->esq->esq->dir->esq=newNode0(rotulos[4]);
		raiz->dir->esq->esq->dir->dir=newNode0(rotulos[4]);

		raiz->dir->esq->dir->esq->esq=newNode1(rotulos[4]);
		raiz->dir->esq->dir->esq->dir=newNode0(rotulos[4]);

		raiz->dir->esq->dir->dir->esq=newNode1(rotulos[4]);
		raiz->dir->esq->dir->dir->dir=newNode0(rotulos[4]);

		raiz->dir->dir->esq->esq->esq=newNode1(rotulos[4]);
		raiz->dir->dir->esq->esq->dir=newNode0(rotulos[4]);

		raiz->dir->dir->esq->dir->esq=newNode1(rotulos[4]);
		raiz->dir->dir->esq->dir->dir=newNode0(rotulos[4]);

		raiz->dir->dir->dir->esq->esq=newNode1(rotulos[4]);
		raiz->dir->dir->dir->esq->dir=newNode0(rotulos[4]);

		raiz->dir->dir->dir->dir->esq=newNode1(rotulos[4]);
		raiz->dir->dir->dir->dir->dir=newNode0(rotulos[4]);
		cont++;
	}

return raiz;
}

struct NO* Buscar(struct NO *raiz, int *bits){
    struct NO* atual = raiz;

  	int count = 0;

	while(count != sizeof(bits)){
		if(bits[0+count] == 1){
			atual = atual->esq;
		}

		if(bits[0+count] == 0){
			atual = atual->dir;
		}
	}

	return atual;

}

void PassarImprimindo(struct NO *raiz){
  	 struct NO* atual = raiz;

    if(raiz == NULL)
        return;
    if(raiz != NULL){
  		printf("%c:",(raiz)->letra);
	    printf(" %d\n",(raiz)->info);

        PassarImprimindo(raiz->esq);

        PassarImprimindo(raiz->dir);
    }
}

void PercorrerArvore(struct NO *raiz, char letra){
  	 struct NO* atual = raiz;

    if(raiz == NULL)
        return;
    if(raiz != NULL){
        PercorrerArvore(raiz->esq, letra);

     /*   if(raiz->esq->letra == letra){
        	atual = atual->esq;
        	atual=NULL;
		}
	*/
		PercorrerArvore(raiz->dir, letra);
	/*
		   if(raiz->esq->letra == letra){
        	atual = atual->dir;
     	   atual=NULL;
    */

    }
}

struct NO* PodarArvore(struct NO *raiz, char rotulo){
	    struct NO* atual = raiz;
	   	struct NO* pre = raiz;

	   	printf("teste");

	    while(atual->letra != rotulo){
	        atual = atual->esq;

	          	if(atual->esq == NULL){
	        		break;
	       		}
		}

		printf("HD");

		PercorrerArvore(raiz, rotulo);

		return raiz;

}



					/*****	*****	*****	Main	****	*****	*****/
int main(){
	//criar arvore
	struct NO* raiz;
	int tam;
	char rotulos[10];
	char letra;
	int bits[10] ={1,0,1,1,1};
	int a;
	char random;


	do{
		printf("  ============================================ \n ");
		printf(" ============= Trabalho de Arvore =========== \n ");
		printf(" ============================================ \n ");

		printf(" ===(1) Criar nova arvore	            == \n ");
		printf(" ===(2) Imprimir arvore                    == \n ");
		printf(" ===(3) Podar propriadade da arvore        == \n ");
		printf(" ===(4) Sair				    == \n ");
		printf(" ============================================ \n ");
		printf("\n");
		printf("  ===Opcao: ");
		scanf ("%d",&a);

		if(a<1 || a>4){
			while((a<1) || (a>4)){
				printf("\n");
				printf("  ===Digite a opcao novamente: ");
				scanf("%d",&a);
				fflush(stdin);
				printf("\n");
			}
		}

		fflush(stdin);

	switch(a){
		case 1:
			//Insira a letra que representa a raiz

			printf("  ===Digite a altura da arvore:");
			scanf("%d",&tam);

				if((tam<0) || (tam>5)){

					while((tam<0) || (tam>5)){
						printf("\n");
						printf("  ===Digite um tamanho menor que 5, por favor: ");
						scanf("%d",&tam);
						fflush(stdin);
						printf("\n");
					}
				}

			fflush(stdin);
			printf("  ===Insira a propriedade(Letra) para representar a raiz: ");
			scanf("%c",&letra);
			printf("\n");
			raiz = newNo(letra);
			raiz->info=NULL;

			fflush(stdin);

			printf("  ===Insira a propriedade(Letra) para representar os rotulos: \n");
			printf("\n");

			for(int i=0; i< tam; i++){
				printf("Rotulo %d: %c", (i+1), NULL);
				scanf("%c",&random);
				rotulos[i]=random;
				printf("\n");


				fflush(stdin);

			}

			CriarArvoreDecisao(raiz, tam, rotulos);
			printf("Arvore criada com sucesso \n");
			printf("\n");
			break;

		case 2:
			PassarImprimindo(raiz);
			printf("Chamou o imprimir e pah \n");
			printf("\n");
			break;
		case 3:
			//Receber a propriedade a ser podada e executar podararvore();
			printf("Chamou o podar e pah \n");
			printf("\n");
			break;
		case 4:
			printf("  ===Voce optou por sair do progama. \n");
			printf("  ===Fim de progama. ");
			printf("\n");
			break;
	}

	}while(a!=4);


	system("pause");
	return 0;


}
