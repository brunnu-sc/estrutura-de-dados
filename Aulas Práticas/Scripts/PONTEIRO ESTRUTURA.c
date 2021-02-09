#include <stdio.h>
#include <stdlib.h>

typedef struct ITEM
{
	int chave;
	int valor;
};

int main(void)
{
	struct ITEM item;
	struct ITEM *pitem;

	pitem = &item;
	(*pitem).chave = 4;
	(*pitem).valor = 2;
	
	item.chave = item.chave + item.valor + 3;
	item.valor = 4;
	

	printf("item chave = %d\n", item.chave);
	printf("item valor = %d\n", item.valor);

	return 0;
}
