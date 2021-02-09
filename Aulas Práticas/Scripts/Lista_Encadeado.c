#include <stdio.h>
#include <stdlib.h>

typedef struct ponto
{
	int x, y;
	struct ponto *proximo;
} t_ponto;

int main(int argc, char *argv[])
{
	t_ponto *ini_ponto;
	t_ponto *proximo_ponto;
	int resposta;

	ini_ponto = (t_ponto *)malloc(sizeof(t_ponto));
	if(ini_ponto == NULL)
	{
		exit(1);
	}
	proximo_ponto = ini_ponto;

	while(1)//ENQUANTO VERDADE
	{
		printf("Digite x: ");
		scanf("%d", &proximo_ponto->x);
		printf("Digite y: ");
		scanf("%d", &proximo_ponto->y);
		printf("Deseja continuar? <1> SIM <outro valor> NAO: ");
		scanf("%d", &resposta);
		if(resposta == 1)
		{
			proximo_ponto->proximo = (t_ponto *)malloc(sizeof(t_ponto)); //ALOCANDO ESPAÇO NA MEMORIA
			proximo_ponto = proximo_ponto-> proximo;
		}
		else
		{
			break;
		}
	}

	proximo_ponto->proximo = NULL;  //QUANDO O PROXIMO È NULL QUANDO A LISTA CHEGAR AO FIM
	proximo_ponto = ini_ponto; // PRA COMEÇAR A PERCORRE A LISTA DO INICIO
	while(proximo_ponto != NULL)
	{
		printf("\nx = %d\ny = %d\n", proximo_ponto->x, proximo_ponto->y);
		proximo_ponto = proximo_ponto->proximo;
	}
	return 0;
}


