#include "item.h"

ITEM *criar_item(int matricula, int idade, float nota1, float nota2)
{
	ITEM *itemAluno = (ITEM *) malloc(sizeof(ITEM));
	itemAluno->matricula = matricula;
	itemAluno->idade = idade;
	itemAluno->nota1 = nota1;
	itemAluno->nota2 = nota2;
	itemAluno->media = (nota1 + nota2) / 2;
	return itemAluno;
}
void apagar_item(ITEM *item)
{
	free(item);
}
void imprimir_item(ITEM *item)
{
	printf("\n\nMatricula: %d\n", item->matricula);
	printf("Idade: %d\n", item->idade);
	printf("Nota 1: %.1f\n", item->nota1);
	printf("Nota 2: %.1f\n", item->nota2);
	printf("Media: %.1f\n", item->media);
}
