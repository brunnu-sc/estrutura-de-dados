#include <stdio.h>
#include "item.h"
#include "lista.h"

int main(void)
{
	LISTA *listaNova = criarLista();

	ITEM *aluno = criar_item(11, 15, 6, 7);
	inserir_ordenado(listaNova, aluno);

	aluno = criar_item(10, 15, 8.5, 7.5);
	inserir_ordenado(listaNova, aluno);

	aluno = criar_item(9, 15, 9, 10);
	inserir_ordenado(listaNova, aluno);

	printf("\nBuscando matricula 10");
	imprimir_item(busca_binaria1(listaNova, 11));

	return 0;
}
