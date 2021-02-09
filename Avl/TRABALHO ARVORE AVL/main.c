#include "arvore.h"

arvoreAVL *raiz; //PONTEIRO PARA PONTEIRO

int main()
{
	int x, Y;
	int valor;

	printf("Digite valor: ");
	scanf("%d", &valor);
	x = inserir(raiz, valor);

	printf("Digite valor: ");
	scanf("%d", &valor);
	Y = remocao(raiz, valor);

	return 0;
}

