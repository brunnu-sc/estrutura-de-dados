#include "pilhaDinamica.h"
int main()          //declaração das variaveis usadas
{
	PILHA *pi;
	int x;
	int valor;
	int opcao;

	do
	{
		menu();
		printf("Digite opcao: ");
		scanf("%d", &opcao);
		switch(opcao)
		{
		case 1:
			pi = criar_pilha();
			break;
		case 2:
			printf("\tValor: ");
			scanf("%d", &valor);
			x = inserir_pilha(pi, valor);
			if(x == 1)
			{
				printf("\n\tInserido\n");
			}
			else
			{
				printf("\n\tNao Inserido\n");
			}
			break;
		case 3:
			x = remover_topo(pi);
			if(x == 1)
			{
				printf("\n\tRemovido\n");
			}
			else
			{
				printf("\n\tNao Removido\n");
			}
			break;
		case 4:
			x = consulta_topo(pi);
			break;
		case 5:
			x = tamanho_pilha(pi);
			printf("\n\tTamanho: %d", x);
			break;
		case 6:
			x = pilha_vazia;
			if(x == 1)
			{
				printf("\n\tVazia\n");
			}
			else
			{
				printf("\n\tNao Vazia\n");
			}
			break;

		case 7:
			imprimir_pilha(pi);
			break;
		case 8:
			x = liberar_pilha(pi);
			if(x == 1)
			{
				printf("\npilha apagada");
			}
			else
			{
				printf("\npilha nao apagada");
			}
		default:
			break;
		}
	}
	while (opcao != 0);



	return 0;
}
