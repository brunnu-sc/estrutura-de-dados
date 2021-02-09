#include "pilhaDinamica.h"

struct pilha
{
	int valor;
	struct pilha *prox;
	struct pilha *topo;
};

void menu()
{
	system("cls");
	printf("\n\t[ 1 ] - Criar Pilha\n");
	printf("\t[ 2 ] - Inserir\n");
	printf("\t[ 3 ] - Remover Topo\n");
	printf("\t[ 4 ] - Elemento Topo\n");
	printf("\t[ 5 ] - Tamanho\n");
	printf("\t[ 6 ] - Vazia\n");
	printf("\t[ 7 ] - Imprimir\n");
	printf("\t[ 8 ] - Apagar Pilha\n\n");

	printf("\t[ 0 ] - SAIR\n\n");
}

PILHA *criar_pilha()
{
	PILHA *pi = (PILHA*)malloc(sizeof(PILHA));
	if (pi != NULL)
	{
		pi->topo = NULL;
		int cont = 0;
		printf("\n\tPilha Criada\n");
		return pi;
	}
	else
	{
		printf("\n\tErro\n");
	}
	return pi;
}

int liberar_pilha(PILHA *pi)
{
	if(pi != NULL)
	{
		PILHA *novoNO;
		while(pi->topo != NULL)
		{
			novoNO = pi->topo ;
			pi->topo = pi->topo->prox;
			free(novoNO);
		}
		free(pi);
	}
}

int tamanho_pilha(PILHA *pi)
{
	if(pi == NULL)
	{
		return 0;
	}
	int cont = 0;
	PILHA *novoNO = pi->topo;
	while(novoNO != NULL)
	{
		cont++;
		novoNO = novoNO->prox;
	}
	return cont;
}

int pilha_vazia(PILHA *pi)
{
	if(pi == NULL)
	{
		return 1;
	}
	if(pi->topo == NULL)
	{
		return 1;
	}
	return 0;
}

int inserir_pilha(PILHA *pi, int valor)
{
	if(pi == NULL)
	{
		return 0;
	}
	PILHA *novoNO = (PILHA*)malloc(sizeof(PILHA));
	if(novoNO == NULL)
	{
		return 0;
	}
	novoNO->valor = valor;
	novoNO->prox = pi->topo;
	pi->topo = novoNO;
	return 1;
}

int remover_topo(PILHA *pi)
{
	if(pi == NULL)
	{
		return 0;
	}
	if(pi->topo == NULL)
	{
		return 0;
	}
	PILHA *novoNO = pi->topo;
	pi->topo = novoNO->prox;
	free(novoNO);
	return 1;
}

int consulta_topo(PILHA* pi, int valor)
{
	if(pi == NULL)
	{
		printf("\tPilha Nao Existe\n");
		return 0;
	}
	if(pi->topo == NULL)
	{
		printf("\tPilha Vazia\n");
		return 0;
	}
	printf("\nValor no Topo: %d\n", pi->topo->valor);
	return 1;
}

void imprimir_pilha(PILHA *pi)
{
	PILHA *aux;
	aux = pi->topo;
	while (aux != NULL)
	{
		printf("\tValor: %d\n", aux->valor);
		aux = aux->prox;
	}
}

