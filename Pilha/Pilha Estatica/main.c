#include "pilhaEstatica.h"

int main ()
{
	PILHA *pi;
	int x, valor, opcao;

	do
	{
		menu();
		printf("Opcao: ");
		scanf("%d", &opcao);
		switch(opcao)
		{
		case 1:
			pi = criar_pilha();
			system("pause");
			break;
		case 2:
			printf("\t%d Valor: ", tamanho_pilha(pi) + 1);
			scanf("%d", &valor);
			x = inserir_pilha (pi, valor);
			if(x == 1)
			{
				printf("\n\tDeu Certo\n");
			}
			else
			{
				printf("\n\tNao deu Certo\n");
			}
			system("pause");
			break;
		case 3:
			x = remove_topo(pi);
			if (x == 1)
			{
				printf ("\n\tRemovido com Sucesso\n");
			}
			else
			{
				printf("\n\tNao deu para Remover\n");
			}
			system("pause");
			break;
		case 4:
			consulta_topo(pi);
			system("pause");
			break;
		case 5:
			x = tamanho_pilha (pi);
			printf ("\n\tTotal: %d\n", x);
			system("pause");
			break;
		case 6:
			x = pilha_vazia (pi);
			if (x == 1)
			{
				printf ("\n\tPilha Vazia\n");
			}
			else
			{
				printf ("\n\tPilha nao Vazia\n");
			}
			system("pause");
			break;
		case 7:
			x = pilha_cheia (pi);
			if (x == 1)
			{
				printf ("\n\tCheia\n");
			}
			else
			{
				printf ("\n\tPilha nao Cheia\n");
			}
			system("pause");
			break;
		case 8:
			printar(pi);
			system("pause");
			break;
		case 9:
			apagar_pilha(pi);
			system("pause");
			break;
		default:
			break;
		}
	}
	while(opcao != 0);
	return 0;
}
