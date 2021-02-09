#include "lista.h"

struct lista
{
	ITEM *ListaAlunos[TAM];
	int fim;
};

LISTA *criarLista()
{
	LISTA *lista = (LISTA*) malloc(sizeof(lista));
	lista->fim = -1;
	return lista;
}

int cheia(LISTA *lista)
{
	if(lista->fim < TAM)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int inserirFim(LISTA *lista, ITEM *item)
{
	if(cheia(lista) == 0)
	{
		lista->ListaAlunos[lista->fim + 1] = item;
		lista->fim++;
		return 1;
	}
	else
	{
		return 0;
	}
}

int inserirPosicao(LISTA *lista, int pos, ITEM *item)
{
	int i;

	if (cheia(lista) == 0 && pos <= lista->fim + 1)
	{
		for (i = lista->fim; i >= pos; i--)   //move os ListaAlunos
		{
			lista->ListaAlunos[i + 1] = lista->ListaAlunos[i];
		}

		lista->ListaAlunos[pos] = item; //insere novo item
		lista->fim++; //incrementa tamanho
		return 1;
	}
	else
	{
		return 0;
	}
}

void imprimirLista(LISTA *lista)
{
	for (int i = 0; i <= lista->fim; i++)
	{
		printf("-----%d-----\n", i);
		imprimir_item(lista->ListaAlunos[i]);
	}
}

int inserir_ordenado(LISTA *lista, ITEM *item)
{
	if (cheia(lista) == 0)   //verifica se existe espaço
	{
		int pos = lista->fim + 1;

		//move os ListaAlunos até encontrar a posição de inserção
		while (pos > 0 && lista->ListaAlunos[pos - 1]->matricula > item->matricula)
		{
			lista->ListaAlunos[pos] = lista->ListaAlunos[pos - 1];
			pos--;
		}

		lista->ListaAlunos[pos] = item; //insire novo item
		lista->fim++; //incrementa tamanho da lista
		return 1;
	}
	return 0;
}

ITEM *busca_sequencial(LISTA *lista, int matricula)
{
	int i;

	for (i = 0; i <= lista->fim; i++)
	{
		if (lista->ListaAlunos[i]->matricula == matricula)
		{
			return lista->ListaAlunos[i];
		}
		else if (lista->ListaAlunos[i]->matricula > matricula)
		{
			return NULL;
		}
	}
	return NULL;
}

ITEM *busca_binaria(LISTA *lista, int matricula)
{
	int esq = 0;
	int dir = lista->fim;

	while (esq <= dir)
	{
		int meio = (esq + dir) / 2;

		if (lista->ListaAlunos[meio]->matricula == matricula)
		{
			return lista->ListaAlunos[meio];
		}
		if (lista->ListaAlunos[meio]->matricula > matricula)
		{
			dir = meio - 1;
		}
		else
		{
			esq = meio + 1;
		}
	}
	return NULL;
}

ITEM *busca_binaria1(LISTA *lista, int matricula)
{
	int d = lista->fim;
	int e = 0;
	int m;

	while(d >= e)
	{
		m = (d + e) / 2;
		if(lista->ListaAlunos[m]->matricula == matricula)
		{
			return lista->ListaAlunos[m];
		}
		if(lista->ListaAlunos[m]->matricula < matricula)
		{
			e = m + 1;
		}
		else
		{
			d = m - 1;
		}
	}
	return NULL;
}
