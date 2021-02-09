#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main()
{

	printf("Usando o Projeto\n");
	int y = 5;
	int quad = quadrado(y);
	int cub = cubo(y);

	printf("O quadrado do numero %d = %d\n", y, quad);
	printf("O cubo do numero %d = %d\n", y, cub);
	printf("O valor da constante PI = %.2f\n", _PI);

	return 0;
}
