#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

struct NO
{
	int valor;
	int altura;
	struct NO *esquerdo;
	struct NO *direito;
};

int altura_No(struct NO* novoNo)
{
	if(novoNo == NULL)
	{
		return -1;
	}
	else
	{
		return novoNo->altura;
	}
}

int balanceamento_No(struct NO* novoNo)
{
	return labs(altura_No(novoNo->esquerdo) - altura_No(novoNo->direito));
}

int maior(int x, int y)
{
	if(x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
//ROTAÇÃO SIMPLES A ESQUERDA "LL"
void rotacaoEE(arvoreAVL *raiz)
{
	struct NO *no;
	no = (*raiz)->esquerdo;
	(*raiz)->esquerdo = no->direito;
	no->direito = (*raiz);
	(*raiz)->altura = maior(altura_No((*raiz)->esquerdo), altura_No((*raiz)->direito)) + 1;

	no->altura = maior(altura_No(no->esquerdo), (*raiz)->altura) + 1;
	(*raiz) = no;
}
//ROTAÇÃO SIMPLES A DIREITA "RR"
void rotacaoDD(arvoreAVL *raiz)
{
	struct NO *no;
	no = (*raiz)->direito;
	(*raiz)->direito = no->esquerdo;
	no->esquerdo = (*raiz);
	(*raiz)->altura = maior(altura_No((*raiz)->esquerdo), altura_No((*raiz)->direito)) + 1;

	no->altura = maior(altura_No(no->direito), (*raiz)->altura) + 1;
	(*raiz) = no;
}
//ROTÇÕES DUPLAS LR
void rotacaoED(arvoreAVL *raiz)
{
	rotacaoDD(&(*raiz)->esquerdo);
	rotacaoEE(raiz);
}
//ROTÇÕES DUPLAS RL
void rotacaoDE(arvoreAVL *raiz)
{
	rotacaoEE(&(*raiz)->direito);
	rotacaoDD(raiz);
}
int inserir(arvoreAVL *raiz, int valor)
{
	int resposta;
	if((*raiz) == NULL) // ARVORE VAZIA OU NO FOLHA
	{
		struct NO *novoNo;
		novoNo = (struct NO*)malloc(sizeof(struct NO));
		if(novoNo == NULL)
		{
			return 0;
		}
		novoNo->valor = valor;
		novoNo->altura = 0; // VAI SER A FOLHA OU RAIZ
		novoNo->esquerdo = NULL;
		novoNo->direito = NULL;
		(*raiz) = novoNo;
		return 1;
	}
	struct NO *atual = *raiz;
	if(valor < atual->valor)
	{
		if((resposta = inserir(&(atual->esquerdo), valor)) == 1)
		{
			if(balanceamento_No(atual) >= 2)
			{
				if(valor < (*raiz)->esquerdo->valor)
				{
					rotacaoEE(raiz);
				}
				else
				{
					rotacaoED(raiz);
				}
			}
		}
	}
	else
	{
		if(valor > atual->valor)
		{
			if((resposta = inserir(&(atual->direito), valor)) == 1)
			{
				if(balanceamento_No(atual) >= 2)
				{
					if((*raiz)->direito->valor < valor)
					{
						rotacaoDD(raiz);
					}
					else
					{
						rotacaoDE(raiz);
					}
				}
			}
		}
		else
		{
			printf("\n\tValor Duplicado\n");
			return 0;
		}
	}
	atual->altura = maior(altura_No(atual->esquerdo), altura_No(atual->direito)) + 1;
	// RECALCULAR A ALTURA
	return resposta;
}

struct NO* procurar_menor(struct NO* atual)
{
	struct NO *no1 = atual;
	struct NO *no2 = atual->esquerdo;
	while(no2 != NULL)
	{
		no1 = no2;
		no2 = no2->esquerdo;
	}
	return no1;
}

int remocao(arvoreAVL *raiz, int valor)
{
	if(*raiz == NULL) // VALOR NÃO EXISTE
	{
		printf("\n\tValor nao EXISTE\n");
		return 0;
	}
	int resposta;
	if(valor < (*raiz)->valor)
	{
		if((resposta = remocao(&(*raiz)->esquerdo, valor)) == 1)
		{
			if(balanceamento_No(*raiz) >= 2)
			{
				if(altura_No((*raiz)->direito->esquerdo) <= altura_No((*raiz)->direito->direito))
				{
					rotacaoDD(raiz);
				}
				else
				{
					rotacaoDE(raiz);
				}
			}
		}
		if((*raiz)->valor < valor)
		{
			if((resposta = remocao(&(*raiz)->direito, valor)) == 1)
			{
				if(balanceamento_No(*raiz) >= 2)
				{
					if(altura_No((*raiz)->esquerdo->direito) <= altura_No((*raiz)->esquerdo->esquerdo))
					{
						rotacaoEE(raiz);
					}
					else
					{
						rotacaoED(raiz);
					}
				}
			}
			if((*raiz)->valor == valor)
			{
				if(((*raiz)->esquerdo == NULL || (*raiz)->direito == NULL))
				{
					struct NO *antigoNo = (*raiz);
					if((*raiz)->esquerdo != NULL)
					{
						*raiz = (*raiz)->esquerdo;
					}
					else
					{
						*raiz = (*raiz)->direito;
					}
					free(antigoNo);
				}
				else   // NÓ TEM 2 FILHOS
				{
					struct NO* temp = procurar_menor((*raiz)->direito);
					(*raiz)->valor = temp->valor;
					remocao(&(*raiz)->direito, (*raiz)->valor);
					if(balanceamento_No(*raiz) >= 2)
					{
						if(altura_No((*raiz)->esquerdo->direito) <= altura_No((*raiz)->esquerdo->esquerdo))
						{
							rotacaoEE(raiz);
						}
						else
						{
							rotacaoED(raiz);
						}
					}
				}
			}
			return 1;
		}

	}
	return resposta;
}


