#include "livro.h"

Dados *criar()
{
	return NULL;
}
void menu()
{
	printf("-------------------------------------------\n");
	printf("\n\t\t[ MENU ]\n\n");
	printf("[ 1 ] - Inserir\n");
	printf("[ 2 ] - Imprimir\n");
	printf("[ 3 ] - Excluir\n");
	printf("\nDigite [ 0 ] para sair do programa\n\n");
	printf("-------------------------------------------\n");
}

Dados *inserir(Dados *list, char *titulo, char *autor, char *genero, int ano)
{
	Dados *novo = (Dados*)malloc(sizeof(Dados));
	strcpy(novo->titulo, titulo);
	strcpy(novo->autor, autor);
	strcpy(novo->genero, genero);
	novo->ano = ano;
	novo->proximo = list;
	return novo;
}
void imprimir(Dados *list)
{
	Dados *aux;
	printf("\n\t\t[ LIVROS ]\n\n");
	for(aux = list; aux != NULL; aux = aux->proximo)
	{
		printf("-------------------------------------------\n");
		printf("\tTitulo: %s \n", aux->titulo);
		printf("\tAutor: %s \n", aux->autor);
		printf("\tGenero: %s \n", aux->genero);
		printf("\tAno: %d \n", aux->ano);
		if(aux->ano < 1930)
		{
			printf("\n%s(%d): Anterior Modernismo\n", aux->titulo, aux->ano);
		}
		else if(aux->ano >= 1930 && aux->ano <= 1945)
		{
			printf("\n%s(%d): Modernismo\n", aux->titulo, aux->ano);
		}
		else if(aux->ano > 1945)
		{
			printf("\n%s(%d): Posterior Modernismo\n", aux->titulo, aux->ano);
		}
	}
}
Dados *excluir(Dados *list, char *titulo)
{
	Dados *ant = NULL;
	Dados *aux = list;
	while(aux != NULL && strcmp(aux->titulo, titulo ) != 0)
	{
		ant = aux;
		aux = aux->proximo;
	}
	if(aux == NULL)
	{
		return list;
	}
	if(ant == NULL)
	{
		list = aux->proximo;
	}
	else
	{
		ant->proximo = aux->proximo;
	}
	free(aux);

	printf("Excluido com sucesso\n");

	return list;
}
