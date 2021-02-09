#include "livro.h"

int main()
{
	struct dados
	{
		char titulo[50];
		char autor[30];
		char genero[10];
		int ano;
	} enviar;

	int opcao;
	Dados *bDados;
	bDados = criar();
	while(opcao != 0)
	{
		menu();
		printf("Digite: ");
		scanf("%d", &opcao);
		switch(opcao)
		{
		case 1:
			printf("\nTitulo: ");
			fflush(stdin);
			scanf("%50[^\n]", enviar.titulo);
			getchar();
			printf("Autor: ");
			fflush(stdin);
			scanf("%30[^\n]", enviar.autor);
			getchar();
			printf("Genero: ");
			fflush(stdin);
			scanf("%10[^\n]", enviar.genero);
			getchar();
			printf("Ano: ");
			scanf("%d", &enviar.ano);
			bDados = inserir(bDados, enviar.titulo, enviar.autor, enviar.genero, enviar.ano);
			break;
		case 2:
			imprimir(bDados);
			break;
		case 3:
			printf("Titulo: ");
			fflush(stdin);
			scanf("%50[^\n]", enviar.titulo);
			getchar();
			bDados = excluir(bDados, enviar.titulo);
			break;
		default:
			break;
		}
	}

	return 0;
}
