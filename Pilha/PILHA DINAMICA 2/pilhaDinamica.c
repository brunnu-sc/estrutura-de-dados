#include "pilhaDinamica.h"

struct pilha
{
	int valor;
	struct pilha *prox;
	struct pilha *topo;
};

PILHA *criar_pilha()
{
	PILHA *pi = (PILHA*)malloc(sizeof(PILHA)); //alocando memoria
	if(pi != NULL)
		pi->topo = NULL;    //topo da pilha recebe null
	return pi;

}


int liberar_pilha(PILHA *pi)
{
	if(pi != NULL)
	{
		PILHA *no;      //crio um ponteiro tipo pilha
		while(pi->topo != NULL)
		{
			no = pi->topo ;     //no recebe o pi->topo
			pi->topo = pi->topo->prox; //topo recebe o topo proximo
			free(no);   //libera o no
		}
		free(pi);
	}

	return 1;

}


int tamanho_pilha(PILHA *pi)
{
	if(pi == NULL)      //verifica se a pilha esta vazia
	{
		return 0;
	}
	int cont = 0;       //criação de um contador
	PILHA *no = pi->topo;   //criação de um no do tipo PILHA que recebe o topo da pilha
	while(no != NULL)
	{
		cont++;
		no = no->prox;

	}

	return cont;
}

int pilha_cheia(PILHA *pi)
{
	return 0;
}

int pilha_vazia(PILHA *pi)
{
	if(pi == NULL)      //verificando se a pilha existe
	{
		return 1;
	}
	if(pi->topo == NULL)    //verificando se a pilha esta vazia
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
	PILHA *novoNO = (PILHA*)malloc(sizeof(PILHA));  //alocando memoria
	if(novoNO == NULL)               //verificando se deu certo alocar
	{
		return 0;
	}
	novoNO->valor = valor;      //novoNO recebe o valor digitado pelo usuario
	novoNO->prox = pi->topo;    //novoNO aponta para o topo da PILHA
	pi->topo = novoNO;          //topo recebe o novoNO
	return 1;
}

int remover_topo(PILHA *pi)
{
	if(pi == NULL)      //verificando se a Pilha existe
	{
		return 0;
	}
	if(pi->topo == NULL)    //verificando se ela esta vazia
	{
		return 0;
	}
	PILHA *no = pi->topo;   //criação de um ponteiro que recebe o topo
	pi->topo = no->prox;    //topo aponta para o proximo do no
	free(no);               //libera o no
	return 1;
}

int consulta_topo(PILHA* pi)
{
	if(pi == NULL)
	{
		return 0;
	}
	if(pi->topo == NULL)
	{
		return 0;
	}
	printf("\nValor no Topo: %d\n", pi->topo->valor);   //printa o valor que esta no topo da pilha
	return 1;
}

void imprimir_pilha(PILHA *pi)
{
	PILHA *aux;     //criação de um auxiliar
	aux = pi->topo; //auxiliar recebe o topo
	while (aux != NULL)     //enquanto auxiliar diferente de NULL
	{
		printf ("%d\n", aux->valor);    //printa o auxiliar->valor
		aux = aux->prox;        //incrementando, auxiliar recebe auxiliar->proximo
	}
}

void menu()
{
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
