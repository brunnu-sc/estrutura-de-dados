#include <stdio.h>
#include <stdlib.h>


typedef struct ITEM
{
	int chave;
	int valor;
};

int main(void)
{

	struct ITEM *n = (struct ITEM*) malloc(sizeof(struct ITEM));

	n->chave = 1;
	free(n);

	printf("%d", n->chave);
	return 0;
}
