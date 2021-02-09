#include "Livro.h"
#include <string.h>

struct livro
{
	char *titulo;
	char *autor;
	char *genero;
	int  ano;
};

TADLivro *livro_cria(char *titulo, char *autor, char *genero, int ano)
{
	TADLivro *novo = (TADLivro*) malloc (sizeof(TADLivro));

	/*for(int i; titulo[i] != '\n'; i++)
	{
		novo->titulo[i] = titulo[i];
	}*/
	novo->titulo = titulo;
	novo->autor = autor;
	novo->genero = genero;
	novo->ano = ano;
	return novo;
}
void imprimir(TADLivro *livro)
{
	printf("Titulo: %s\n", livro->titulo);
	printf("Autor: %s\n", livro->autor);
	printf("Genero: %s\n", livro->genero);
	printf("Ano: %d\n\n", livro->ano);

}

void modernismo(TADLivro *livro)
{
	if(livro->ano < 1930)
	{
		printf("%s/%d: Anterior Modernismo\n", livro->titulo, livro->ano);
	}
	else if(livro->ano >= 1930 && livro->ano <= 1945)
	{
		printf("%s(%d): Modernismo\n", livro->titulo, livro->ano);
	}
	else if(livro->ano > 1945)
	{
		printf("%s(%d): Posterior Modernismo\n", livro->titulo, livro->ano);
	}
}

void ordenaLivros(TADLivro *livro)
{
	char vetor[20][30], aux[20];
	int i, j;

	for(i = 0; i < 5; i++)
	{
		printf("Nome do Livro: ");
		fgets(vetor[i], 30, stdin);
	}
	for (j = 1; j < 5 ; j++)
	{
		strcpy(aux, vetor[j]);
		i = j - 1;
		while(i >= 0 && strcmp(vetor[i], aux) > 0)
		{
			strcpy(vetor[i + 1], vetor[i]);
			i--;
		}
		strcpy(vetor[i + 1], aux);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\t%s\n", i+1, vetor[i]);
	}
}


