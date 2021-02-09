#include <stdio.h>
#include <stdlib.h>
#include "filaEstatica.h"
#include "filaDinamica.h"

int main(){
	Tfila* minhaFila = criar_filaEstatica();
	printf("Fila criada!!");
	insere_filaEstatica(minhaFila, 4);
	
	
	// fila dinamica
	TfilaDinamica* minhaFilaDinamica; 
	minhaFilaDinamica = cria_filaDinamica();
	
	return 0;
}