#include <stdio.h>
#include <stdlib.h>

#define MAX 3

typedef struct pilha PILHA;

PILHA *criar_pilha ();

int tamanho_pilha (PILHA* pi);
int pilha_cheia (PILHA* pi);
int pilha_vazia (PILHA* pi);
int inserir_pilha (PILHA* pi, int valor);
int remove_topo(PILHA* pi);
int consulta_topo(PILHA* pi);

void apagar_pilha(PILHA* pi);
void printar(PILHA* pi);

