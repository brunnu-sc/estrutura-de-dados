#include "pilhaEstatica.h"

struct pilha    
{
	int item[MAX];
	int quant;
};

int verificar(PILHA * pi)
{
	if (pi == NULL)
	{
		printf("\tLISTA FOI APAGADA\n");
		return 0;
	}
}

void menu()
{
	system("cls");
	printf("\n\t[ 1 ] - Criar Pilha\n");
	printf("\t[ 2 ] - Inserir\n");
	printf("\t[ 3 ] - Remover Topo\n");
	printf("\t[ 4 ] - Elemento Topo\n");
	printf("\t[ 5 ] - Tamanho\n");
	printf("\t[ 6 ] - Vazia\n");
	printf("\t[ 7 ] - Cheia\n");
	printf("\t[ 8 ] - Imprimir\n");
	printf("\t[ 9 ] - Apagar Pilha\n\n");

	printf("\t[ 0 ] - SAIR\n");

}
PILHA * criar_pilha ()
{
	PILHA *pi = (PILHA *) malloc(sizeof(struct pilha)); //alocando memoria
	if (pi != NULL) //verifica  se deu certo alocar
	{
		pi->quant = 0;
		printf("\n\tPilha Criada\n");
		return pi;
	}
	else
	{
		printf("\n\tErro\n");
	}
}

int inserir_pilha (PILHA * pi, int valor)
{
	if (pi == NULL)     //verifica se a pilha existe
	{
		return 0;
	}

	if (pilha_cheia (pi))   //verifica se ela esta cheia 
	{
		return 0;
	}
	pi->item[pi->quant] = valor;    //pilha->item[pilha->quantidade] recebe o valor passado
	pi->quant++;                    //quantidade encrementada
	return 1;
}

int apagar_pilha(PILHA *pi)
{
   
	free(pi);
    
}

int tamanho_pilha (PILHA * pi)
{
	if (pi == NULL)     //verifica se a pilha existe
	{
		return -1;
	}
	else
	{
		return pi->quant;   //retorna a quantidade de elementos da pilha 
	}
}

int pilha_cheia (PILHA * pi)
{
	if (pi == NULL)     //verifica se a pilha existe
	{
		return -1;

	}
	else
	{
		return (pi->quant == MAX);
	}
}

int pilha_vazia (PILHA * pi)
{
	if (pi == NULL)
	{
		return -1;
	}
	else
	{
		return (pi->quant == 0);
	}
}

int remove_topo(PILHA *pi)
{
	if(pi == NULL || pi->quant == 0)    //verifica se a pilha existe e a quantidade é igual a 0
	{
		return 0;
	}
	else
	{
		pi->quant--;        //quantidade decremento
		return 1;
	}
}


int consulta_topo(PILHA *pi)
{
    if(pi->quant == 0)      //verifica se quantidade é 0
    {
        printf("\n\tA pilha esta Vazia\n");
    }
    else                //se não, printa o elemento do topo
    {
        printf("\tTopo - %d\n", pi->item[pi->quant - 1]);
    }
    return 1;
}

void printar(PILHA *pi)
{
	int aux = pi->quant;    //criação de um auxiliar que recebe a quantidade
	while(aux != 0)         //enquanto auxiliar diferente de 0, printa 
	{
		printf("\t%d Posicao: %d\n", aux, pi->item[aux - 1]);
		aux--;              //decremento no auxiliar
	}
}

