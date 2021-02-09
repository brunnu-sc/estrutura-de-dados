#include <stdio.h>
#include <stdlib.h>

typedef struct x
{
	int a;
	int b;
	int c;
}X;
int main()
{
	/*
	malloc();
	calloc();
	realloc();
	free();
	sizeof(); significa TAMANHO DE:
	    Qualquer tipo de dado
	*/
	int x;    // 4 byts
	double y; // 8 byts
	int vetor[10];  // 40 byts
	
	X estrutura; // 4 x 3 = 12 byts
	
	printf("Inteiro: %i Byts\n", sizeof(x));
	printf("Double: %i Byts\n", sizeof(y));
	printf("Vetor 10 elementos: %i Byts\n", sizeof(vetor));
	printf("Estrutura 3 inteiro: %i Byts\n\n", sizeof(estrutura));

	return 0;
}
