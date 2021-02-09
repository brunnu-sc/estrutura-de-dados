#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "item.h"

#define TAM 100

typedef struct lista LISTA;

LISTA *criarLista();
int inserirFim(LISTA *lista, ITEM *item);
int cheia(LISTA *lista);
void imprimirLista(LISTA *lista);
int inserirPosicao(LISTA *lista, int pos, ITEM *item);
int inserir_ordenado(LISTA *lista, ITEM *item);

ITEM *busca_sequencial(LISTA *lista, int matricula);

ITEM *busca_binaria1(LISTA *lista, int matricula);

#endif
