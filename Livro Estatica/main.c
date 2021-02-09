#include <stdio.h>
#include <stdlib.h>

#include "Livro.h"

int main()
{
	TADLivro *Livro1 = livro_cria("Novos Poemas", "Vinicius de Morais", "Poesia", 1938);
	TADLivro *Livro2 = livro_cria("Poemas Escritos na India", "Cecilia Meireles", "Poesia", 1962);
	TADLivro *Livro3 = livro_cria("Orfeu da Conceicao", "Vinicius de Morais", "Teatro", 1954);
	TADLivro *Livro4 = livro_cria("Ariana, a Mulher", "Vinicius de Morais", "Poesia", 1936);
	
	imprimir(Livro1);
	imprimir(Livro2);
	imprimir(Livro3);
	imprimir(Livro4);
	
	printf("\n\tModernismo 1930 a 1945\n");
	modernismo(Livro1);
	modernismo(Livro2);
	modernismo(Livro3);
	modernismo(Livro4);
	
	ordenaLivros(Livro1);
	
	
	

	return 0;
}
