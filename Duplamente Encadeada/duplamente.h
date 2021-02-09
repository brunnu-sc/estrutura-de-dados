#include <stdint.h>
#include <stdio.h>

typedef struct lista TLISTA;
typedef struct no TNO;

TLISTA *criar_lista();

int lista_vazia(TLISTA *li);
int tamanho(TLISTA *li);
void imprimir(TLISTA *li);
int buscar_valor(TLISTA *li, int valor);

int inserir_inicio(TLISTA *li, int valor);
int inserir_final(TLISTA *li, int valor);
int inserir_valor(TLISTA *li, int valor);


int remover_final(TLISTA *li, int valor);
int remover_inicio(TLISTA *li, int valor);
int remover_valor(TLISTA *li, int valor);

// 6- inserir no final *
// 7- inserir dada uma posição *
// 8- remover inicio *
// 9 - remover no final *
// 10 - remover dado um valor *
// 11 -pesquisar dado um valor *
