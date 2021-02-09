#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct componente
{
	char tipo[20];
	char referencia[4];
	unsigned char num_ref;
	int valor;
	char unidade[10];
}comp;

int main(void){
	printf("Tipo do componente: ");
	fflush(stdin);
	fgets(comp.tipo, 20, stdin);
	
	printf("Referencia do componente: ");
	fflush(stdin);
	fgets(comp.referencia, 4, stdin);
	
	printf("Numero da referencia: ");
	scanf("%c", &comp.num_ref);
	getchar();
	
	printf("Valor do componente: ");
	scanf("%d", &comp.valor);
	getchar();
	
	printf("Unidade: ");
	fflush(stdin);
	fgets(comp.unidade, 10, stdin);
	
	printf("\n\nCOMPONENETE CRIADO:\n");
	printf("%s\n", comp.tipo);
	printf("%s\n", comp.referencia);
	printf("%c\n", comp.num_ref);
	printf("Valor: %d\n", comp.valor);
	printf("%s \n", comp.unidade);
	
	system("PAUSE");
	return 0;
}