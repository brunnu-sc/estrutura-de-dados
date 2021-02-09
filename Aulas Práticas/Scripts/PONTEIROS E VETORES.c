#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, num[] = {1, 2, 3, 4, 5, 6};

	for (i = 0 ; i < 6; i++)
	{
		//printf("Numero: %d\n", num[i]);
		printf("Numero: %d\n", *(num+i));
	}
	return 0;
}
