#include <stdio.h>
#include <stdlib.h>

typedef struct NO* arvoreAVL;

int altura_No(struct NO* novoNo);
int balanceamento_No(struct NO* novoNo);
int maior(int x, int y);
int inserir(arvoreAVL *raiz, int valor);
int remocao(arvoreAVL *raiz, int valor);

void rotacaoEE(arvoreAVL *raiz);
void rotacaoDD(arvoreAVL *raiz);
void rotacaoED(arvoreAVL *raiz);
void rotacaoDL(arvoreAVL *raiz);


