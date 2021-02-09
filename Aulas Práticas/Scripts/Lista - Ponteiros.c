// 01 - 04 - 2019


//1º
/*
int main()
{
	int x, y, *p;
	y = 0;
	p = &y;
	x = *p;
	x = 4;
	(*p)++;
	--x;
	(*p) += x;
	printf("%d %d %d", x, y, *p);
	return 0;
}
*/
void main()
{
	int x, *p;
	x = 100;
	p = &x;
	*p = (200 + x);
	printf("Valor de p: %d.\n", *p);
	return 0;
}
/*
void main()
{
	int x = 100, *p, **pp;
	p = &x;
	pp = &p;
	printf("Valor de **pp: %d.\n", **pp);
	printf("Valor de *pp: %d.\n", *pp);
	printf("Valor de pp: %d.\n", pp);
	printf("Valor de p: %d.\n", p);
	printf("Valor de x: %d.\n", x);
	printf("Valor de &x: %d.\n", &x);
	printf("Valor de &p: %d.\n", &p);
	
	return 0;
}

*/







