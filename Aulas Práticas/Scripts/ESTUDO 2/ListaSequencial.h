#include <stdio.h>
#include <stdlib.h>

#define MAX 100 //CONSTANTE

struct aluno
{
	int matricula;
	float n1, n2;
	char nome[30];
};

typedef struct lista Lista;

Lista* criar_lista();

void liberar_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);