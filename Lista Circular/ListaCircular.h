#include <stdio.h>
#include <stdlib.h>

typedef struct no TNO;
typedef struct lista TLISTA;

TLISTA* criar_lista();

int lista_vazia(TLISTA *li);
void printar_lista(TLISTA *li);

int inserir_no_inicio(TLISTA *li, int valor);
int inserir_no_final(TLISTA *li, int valor);

int inserir_por_posicao(TLISTA *li, int valor, int posicao);

int remover_no_inicio(TLISTA *li);

int tamanho(TLISTA *li);

int remover_no_final(TLISTA *li);
int remover_por_posicao(TLISTA *li);
 