#include <stdio.h>
#include <stdlib.h>

struct x
{
	int a;
	int b;
	int c;
};
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
	
	struct x estrutura; // 4 x 3 = 12 byts
	
	printf("%i Byts", sizeof(estrutura));

	return 0;
}
