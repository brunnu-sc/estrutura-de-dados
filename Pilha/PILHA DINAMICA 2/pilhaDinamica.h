#include <stdio.h>
#include <stdlib.h>
//declaração das funções
typedef struct pilha PILHA;
PILHA *criar_pilha();

int liberar_pilha(PILHA *pi);

int tamanho_pilha(PILHA *pi);

int pilha_cheia(PILHA *pi);
int pilha_vazia(PILHA *pi);

int inserir_pilha(PILHA *pi, int valor);
int remover_topo(PILHA *pi);

int consultar_topo(PILHA *pi);

void imprimir_pilha(PILHA *pi);

void menu();
