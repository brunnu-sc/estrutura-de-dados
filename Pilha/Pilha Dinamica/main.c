#include "pilhaDinamica.h"

int main()
{
	PILHA *pi;
	int x, valor, opcao;
	do
	{
		menu();
		printf("Digite opcao: ");
		scanf("%d", &opcao);
		switch(opcao)
		{
		case 1:
			pi = criar_pilha();
			system("pause");
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
			system("pause");
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
			system("pause");
			break;
		case 4:
			x = consulta_topo(pi);
			system("pause");
			break;
		case 5:
			x = tamanho_pilha(pi);
			printf("\n\tTamanho: %d\n", x);
			system("pause");
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
			system("pause");
			break;
		case 7:
			imprimir_pilha(pi);
			system("pause");
			break;
		case 8:
			x = liberar_pilha(pi);
			if(x == 1)
			{
				printf("\tPilha Apagada\n");
			}
			else
			{
				printf("\tPilha NAO Apagada\n");
			}
			system("pause");
			break;
		default:
			break;
		}
	}
	while (opcao != 0);
	return 0;
}
