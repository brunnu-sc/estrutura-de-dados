#include "ListaSequencial.h"

struct lista
{
	int qtd;
	struct aluno dados[MAX];
};

Lista* criar_lista()
{
	lista *li;
	li = (Lista*)malloc(sizeof(struct lista));
	if(li != NULL)
		li->qtd = 0;
	return li;
}
void liberar_lista(Lista* li)
{
	free(li);
}
int tamanho_lista(Lista* li)
{
	if(li == NULL)
		return -1;
	else
		return li->qtd;
}
int lista_cheia(Lista* li)
{
	if(li == NULL)
		return -1;
	return(li->qtd == MAX);
}
int lista_vazia(Lista* li){
	if(li == NULL)
		return -1;
	return (li->qtd == 0);
}