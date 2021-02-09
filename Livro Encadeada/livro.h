#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dados
{
	char titulo[50];
	char autor[30];
	char genero[10];
	int ano;
	struct dados *proximo;
}Dados;

void menu();
Dados *criar();
void imprimir(Dados *list);
Dados *inserir(Dados *list, char *titulo, char *autor, char *genero, int ano);
Dados *excluir(Dados *list, char *titulo);