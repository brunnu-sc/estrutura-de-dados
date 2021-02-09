#include "duplamente.h"

struct lista
{
	TNO *prim;
	TNO *fim;
};

struct no
{
	int valor;
	struct no *anterior;
	struct no *prox;
};

TLISTA *criar_lista()
{

	TLISTA *novoNO = (TLISTA*)malloc(sizeof(TLISTA));
	if(novoNO == NULL)
	{
		printf("ERRO\n");
		return 0;
	}
	else
	{
		novoNO->prim = NULL;
		novoNO->fim = NULL;
		return novoNO;
	}
}

int lista_vazia(TLISTA *li)
{
	if(li->prim == NULL || li == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int tamanho(TLISTA *li)
{
	int cont = 0;
	TNO *aux = li->prim;
	while(aux != NULL)
	{
		aux = aux->prox;
		cont++;
	}
	return cont;
}

int inserir_inicio(TLISTA *li, int valor)
{
	if(li == NULL)
		return 0;
	TNO *novoNo = (TNO*)malloc(sizeof(TNO));
	novoNo->valor = valor;
	novoNo->anterior = NULL;
	novoNo->prox = li->prim;

	if(li->prim == NULL)
	{
		li->fim = novoNo;
	}
	else
	{
		li->prim->anterior = novoNo;
	}
	li->prim = novoNo;
	return 1;
}

void imprimir(TLISTA *li)
{
	TNO *aux = li->prim;
	int cout = 1;
	while(aux != NULL)
	{
		printf("\n\tPosicao %d = %d\n", cout, aux->valor);
		aux = aux->prox;
		cout++;
	}
}

void menu()
{
	printf("\n\t[1] - Criar Lista\n");
	printf("\t[2] - Lista Vazia\n");
	printf("\t[3] - Tamanho\n");
	printf("\t[4] - Inserir no Inicio\n");
	printf("\t[5] - Imprimir\n");
	printf("\t[6] - Inserir no Final\n");
	printf("\t[7] - Remover no Inicio\n");
	printf("\t[8] - Remover por Posicao\n");
	printf("\t[9] - Remover no Final\n");
	printf("\t[10] - Inserir por Posicao\n");
	printf("\t[11] - Buscar Dado um Valor\n");
	printf("\n\t[0] - SAIR \n");
	printf("\nEscolha a opcao: ");
}

int inserir_final(TLISTA *li, int valor)
{
	if(li == NULL)
		return 0;
	TNO *novoNo = (TNO*)malloc(sizeof(TNO));

	if(novoNo == NULL)
	{
		return 0;
	}
	novoNo->valor = valor;
	novoNo->prox = NULL;

	if(li->prim == NULL) //LISTA VAZIA: insere inicio
	{
		novoNo->anterior = NULL;
		li->prim = novoNo;
	}
	else
	{
		TNO *aux = li->prim;
		while(aux->prox != NULL)
			aux = aux->prox;
		aux->prox = novoNo;
		novoNo->anterior = aux;
	}
	return 1;
}

int remover_inicio(TLISTA *li, int valor)
{
	if(li == NULL)
		return 0;
	if(li->prim == NULL)
		return 0;
	TNO *novoNO = li->prim;
	li->prim = novoNO->prox;
	if(novoNO->prox != NULL)
		novoNO->prox->anterior = NULL;
	free(novoNO);
	return 1;
}

int remover_final(TLISTA *li, int valor)
{
	if(li == NULL)
		return 0;
	if(li->prim == NULL)
		return 0;
	TNO *novoNO = li->prim;
	while(novoNO->prox != NULL)
		novoNO = novoNO->prox;
	if(novoNO->anterior == NULL)
		li->prim = novoNO->prox;
	else
		novoNO->anterior->prox = NULL;
	free(novoNO);
	return 1;
}

int remover_valor(TLISTA *li, int valor)
{
	if(li == NULL)
		return 0;
	TNO *novoNo = li->prim;
	while(novoNo != NULL && novoNo->valor != valor)
	{
		novoNo = novoNo->prox;
	}
	if(novoNo == NULL)
		return 0;
	if(novoNo->anterior == NULL)
	{
		li->prim = novoNo->prox;
	}
	else
	{
		novoNo->anterior->prox = novoNo->prox;
	}
	if(novoNo->prox != NULL)
	{
		novoNo->prox->anterior = novoNo->anterior;
	}
	free(novoNo);
	return 1;
}
int buscar_valor(TLISTA *li, int valor)
{
	if(li == NULL)
		return 0;
	TNO *novoNo = li->prim;
	while(novoNo != NULL && novoNo->valor != valor)
	{
		novoNo = novoNo->prox;
	}
	if(novoNo == NULL)
		return 0;
	if(novoNo->valor == valor)
	{
		return 1;
	}
}

int inserir_valor(TLISTA *li, int valor)
{
    if(li==NULL){
        return 0;
    }
    TNO *novoNO =(TNO*)malloc(sizeof(TNO));
    if(novoNO ==NULL){
        return 0;
    }
    novoNO->valor = valor;
    if(lista_vazia(li)){
        novoNO->prox = NULL;
        novoNO->anterior = NULL;
        li->prim = novoNO;
        return 1;
    }
    else{
        TNO *auxante, *atual = li->prim;
        while(atual != NULL && atual->valor < valor){
            auxante = atual;
            atual = atual->prox;
        }
        if(atual == li->prim){
            novoNO->anterior = NULL;
            li->prim->anterior = novoNO;
            novoNO->prox = li->prim;
            li->prim = novoNO;
        }else{
            novoNO->prox = auxante->prox;
            novoNO->anterior = auxante;
            auxante->prox = novoNO;
            if(atual !=NULL){
                atual->anterior=novoNO;
            }
        }
    }
    return 1;
}

