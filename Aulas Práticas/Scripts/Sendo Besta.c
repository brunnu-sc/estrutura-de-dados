#include <stdio.h>

int main()
{
	int i;

	for(i = 5; i > 0; i--)
	{
		printf("%i patinhos foram passear\n", i);
		printf("Alem das montanhas para brincar\n");
		printf("A mamae gritou: Qua, qua, qua, qua\n\n");
		if(i == 1)
		{
			printf("Mais nenhum patinho voltou de la\n\n");
		}
		else
		{
			printf("Mais %d patinhos voltou de la\n\n", i - 1);
		}
	}
	printf("Puxa, a mamae patinha ficou tao triste naquele dia\n");
	printf("A onde sera que estavam aqueles filhotes?\n");
	printf("Mais essa historia vai ter um final feliz sabe por que ?\n\n");
	
	int j = 5;
	
	printf("A mamae patinha foi procurar\n");
	printf("Alem das montanhas na beira do mar\n");
	printf("A mamae gritou: Qua, qua, qua, qua\n");
	printf("E os %d patinhos voltou de la\n", j);

	return 0;
}
