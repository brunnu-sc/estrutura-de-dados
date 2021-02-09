#include "pilhaEstatica.h"

struct pilha
{
	int item[MAX];
	int quant;
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
	printf("\t[ 7 ] - Cheia\n");
	printf("\t[ 8 ] - Imprimir\n");
	printf("\t[ 9 ] - Apagar Pilha\n\n");

	printf("\t[ 0 ] - SAIR\n");

}
PILHA * criar_pilha ()
{
	PILHA *pi = (PILHA *) malloc(sizeof(struct pilha));
	if (pi != NULL)
	{
		pi->quant = 0;
		printf("\n\tPilha Criada\n");
	}
	else
	{
		printf("\n\tErro\n");
	}
	return pi;
}

int inserir_pilha (PILHA * pi, int valor)
{
	if (pi == NULL)
	{
		return 0;
	}
	if (pilha_cheia (pi))
	{
		return 0;
	}
	pi->item[pi->quant] = valor;
	pi->quant++;
	return 1;
}

void apagar_pilha(PILHA *pi)
{
	free(pi);
}

int tamanho_pilha (PILHA * pi)
{
	if (pi == NULL)
	{
		return -1;
	}
	else
	{
		return pi->quant;
	}
}

int pilha_cheia (PILHA * pi)
{
	if (pi == NULL)
	{
		return -1;
	}
	else
	{
		return (pi->quant == MAX);
	}
}

int pilha_vazia (PILHA * pi)
{
	if (pi == NULL)
	{
		return -1;
	}
	else
	{
		return (pi->quant == 0);
	}
}

int remove_topo(PILHA *pi)
{
	if(pi == NULL || pi->quant == 0)
	{
		return 0;
	}
	else
	{
		pi->quant--;
		return 1;
	}
}

int consulta_topo(PILHA *pi)
{
	if(pi->quant == 0)
	{
		printf("\n\tA pilha esta Vazia\n");
	}
	else
	{
		printf("\tTopo - %d\n", pi->item[pi->quant - 1]);
	}
	return 1;
}

void printar(PILHA *pi)
{
	int aux = pi->quant;
	while(aux != 0)
	{
		printf("\t%d Posicao: %d\n", aux, pi->item[aux - 1]);
		aux--;
	}
}

