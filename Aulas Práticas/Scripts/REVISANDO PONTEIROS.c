// REVISANDO PONTEIROS 25 - 03 - 2019

/*
int main()
{
	int i, j = 2;
	printf("%u\n", &i);
	printf("%d", j);
	return 0;
}



int main(){
	int x, y;
	int *px, *py;
	x = 10;
	y = 20;
	printf("%d\n", x);
	printf("%d\n", y);
	px = &x;
	py = &y;
	printf("%u\n", *px);
	printf("%d\n", *py);
	*px = 3;
	*py = 5;
	printf("%d\n", *px);
	printf("%d\n", *py);
	printf("%d\n", x);
	printf("%d\n", y);

	return 0;
}

int main()
{
	int x = 5, y = 6;
	int *px, *py;
	px = &x;
	py = &y;
	if (px < py)
	{
		printf("%u\n", py - px);
	}
	else
	{
		printf("%u\n", px - py);
		printf("px = %u, *px = %d, &px = %u\n", px, *px, &px);
		px++;
		printf("py = %u, *py = %d, &py = %u\n", py, *py, &py);
	}
	return 0;
}

int main(){
	int num[] = {92, 81, 70, 69, 58};
	int d;
	for(d = 0; d < 5; d++){
		printf("%d\n", num[d]);
		//printf("%d\n", *(num + d));
	}
	return 0;
}
*/

typedef struct ITEM
{
	int chave;
	int valor;
}
int main()
{
	struct ITEM item;
	struct ITEM *pitem;
	pitem = &item;
	(*pitem).chave = 1;
	(*pitem).valor = 2;
	
	return 0;
}







