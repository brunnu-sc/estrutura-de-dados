#include "ListaCircular.h"

int main()
{
	TLISTA* li = criar_lista();

	int i = lista_vazia(li);

	if(i == 1)
		printf("VAZIA\n");
	else
		printf("CHEIA\n");

	int inserir_no_inicio(TLISTA * li, int valor);

	inserir_no_inicio(li, 1);
	inserir_no_inicio(li, 2);
	inserir_no_inicio(li, 3);

	inserir_no_final(li, 14);


	printar_lista(li);
	int x = tamanho(li);
	printf("\tTAMANHO: %d\n", x+1);
	return 0;
}
