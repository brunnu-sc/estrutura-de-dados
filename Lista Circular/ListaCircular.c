#include "ListaCircular.h"

struct no
{
	int valor;
	struct no *prox;
};

struct lista
{
	struct no *prim;
};

TLISTA* criar_lista()
{
	TLISTA* li = (TLISTA*) malloc(sizeof(TLISTA));
	if(li != NULL)
		li->prim = NULL;
	return li;
}

int lista_vazia(TLISTA *li)
{
	if(li->prim == NULL)
		return 1;
	else
		return 0;
}

int inserir_no_inicio(TLISTA *li, int valor)
{
	if(li == NULL)
		return 0;
	TNO *novoNo = (TNO*)malloc(sizeof(TNO));
	novoNo->valor = valor;
	if(li->prim == NULL)
	{
		li->prim = novoNo;
		novoNo->prox = novoNo;
	}
	else
	{
		TNO *ultimo = li->prim;
		while(ultimo->prox != li->prim)
		{
			ultimo = ultimo->prox;
		}
		ultimo->prox = novoNo;
		novoNo->prox = li->prim;
		li->prim = novoNo;
		return 1;
	}
}

int inserir_por_posicao(TLISTA *li, int valor, int posicao)
{
	TNO *aux;
	int contador = 0;
	if (posicao < 0)
		return 0;
	if (posicao == 0)
	{
		inserir_no_inicio(li, valor);
		return 0;
	}
	if (contador <= posicao)
	{
		TNO *no;
		no = (TNO*) malloc(sizeof(TNO));
		no->valor = valor;
		int cont = 0;
		while (cont < posicao - 1)
		{
			no = no->prox;
			cont++;
		}
		aux = no->prox;
		no->prox = no;
		no->prox = aux;
	}
}

int inserir_no_final(TLISTA *li, int valor)
{
	TNO *novoNo = (TNO*)malloc(sizeof(TNO));
	novoNo->valor = valor;
	TNO *ultimo = li->prim;
	if(li->prim == NULL)
	{
		inserir_no_inicio(li, valor);
		return 1;
	}
	while(ultimo->prox != li->prim)
	{
		ultimo = ultimo->prox;
	}
	ultimo->prox = novoNo;
	novoNo->prox = li->prim;
	return 1;
}

int remover_no_inicio(TLISTA *li)
{
	if(li == NULL)
		return 0;
	if(li->prim == NULL)
		return 1;
	TNO *aux = li->prim;
	if(aux->prox == li->prim)
	{
		free(li->prim);
		li->prim = NULL;
	}
	else
	{
		free(li->prim);
		aux->prox = li->prim;
	}
	return 1;
}

void printar_lista(TLISTA *li)
{
	TNO *aux;
	if(li->prim == NULL)
	{
		printf("\nFim da lista\n");
		return ;
	}
	else
	{
		aux = li->prim;
		do
		{
			printf("\tElemento: %d\n", aux->valor);
			
			aux = aux->prox;
		}
		
		while(aux != li->prim);
		printf("Fim da lista\n");
	}
}
int tamanho(TLISTA *li)
{
	if(li == NULL)
	{
		return 0;
	}
	int cont = 0;
	if(li->prim == NULL)
	{
		return cont;
	}
	TNO *aux = li->prim;
	
	do{
		cont++;
		aux = aux->prox;
	}while(aux->prox != li->prim);
	return cont;
}
