#include "duplamente.h"

int main()
{
	int op, tot;
	int tam = 0, aux ;
	TLISTA *minhaLista = NULL;
	do
	{
		menu();
		scanf("%d", &op);
		switch(op)
		{
		case(1):
			if(minhaLista != NULL)
			{
				printf("\n\tLista ja Criada\n\n");
			}
			else
			{
				minhaLista = criar_lista();
				printf("\n\tLista Criada\n\n");
			}
			break;

		case(2):
			if(lista_vazia(minhaLista) == 1)
			{
				printf("\n\tLista Vazia\n\n");
			}
			else
			{
				printf("\n\tLista Preenchida\n\n");
			}
			break;
		case(3):
			tot = tamanho(minhaLista);
			printf("\n\tTotal %d\n\n", tot);
			break;
		case(4):
			printf("\n\tValor a Inserir: ");
			scanf("%d", &tam);
			aux = inserir_inicio(minhaLista, tam);
			if(aux == 1)
			{
				printf("\n\tValor inserido no INICIO\n\n");
			}
			else
			{
				printf("\ntNao conseguimos inserir no INICIO\n\n");
			}
			break;
		case(5):
			imprimir(minhaLista);
			break;
		case(6):
			printf("\n\tValor a Inserir: ");
			scanf("%d", &tam);
			aux = inserir_final(minhaLista, tam);
			if(aux == 1)
			{
				printf("\n\tValor inserido no FINAL\n\n");
			}
			else
			{
				printf("\ntNao conseguimos inserir no FINAL\n\n");
			}
			break;
		case(7):
			aux = remover_inicio(minhaLista, tam);
			if(aux == 1)
			{
				printf("\n\tValor removido no INICIO\n\n");
			}
			else
			{
				printf("\n\ttNao conseguimos removido no INICIO\n\n");
			}
			break;
		case(8):
			printf("\n\tValor a remover: ");
			scanf("%d", &tam);
			aux = remover_valor(minhaLista, tam);
			if(aux == 1)
			{
				printf("\n\tValor Removido\n\n");
			}
			else
			{
				printf("\ntValor nao Removido\n\n");
			}
			break;
		case(9):
			aux = remover_final(minhaLista, tam);
			if(aux == 1)
			{
				printf("\n\tValor removido no FINAL\n\n");
			}
			else
			{
				printf("\ntNao conseguimos removido no FINAL\n\n");
			}
			break;
		case(10):
			printf("\n\tValors a inserir: ");
			scanf("%d", &tam);
			aux = inserir_valor(minhaLista, tam);
			if(aux == 1)
			{
				printf("\n\tValor inserido\n\n");
			}
			else
			{
				printf("\ntNao conseguimos Inserido\n\n");
			}
			break;
		case(11):
			printf("\n\tValor a Buscar: ");
			scanf("%d", &tam);
			aux = buscar_valor(minhaLista, tam);
			if(aux == 1)
			{
				printf("\n\tValor Encontrado\n\n");
			}
			else
			{
				printf("\n\tValor nao existe na LISTA\n\n");
			}
			break;
		default:
			break;
		}
	}
	while(op != 0);
	return 0;
}
