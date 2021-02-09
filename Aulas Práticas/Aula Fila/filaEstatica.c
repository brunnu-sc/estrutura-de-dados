#include <stdio.h>
#include <stdlib.h>
#include "filaEstatica.h"


struct fila
{
	int quant;
	int inicio;
	int fim;
	int dados[100];
};

Tfila* criar_filaEstatica(){
	Tfila* nova;
	nova = (Tfila*) malloc(sizeof(Tfila));
	if (nova != NULL){
		nova->quant = 0;
		nova->inicio = 0;
		nova->fim = 0;
		return nova;
	}
}

int insere_filaEstatica(Tfila *fi, int valorinserido){
	if (fi == NULL){
		return 0;
	}
	if (fi->quant == 100){
		return 0;
	}
	fi->dados[fi->fim] = valorinserido;
	fi->fim = (fi->fim+1)%100;
	fi->quant++;
	return 1;	

}


int remove_filaEstatica(Tfila *fi){
	if (fi == NULL){
		return 0;
	}
	if (fi->quant == 0){
		return 0;
	}
	fi->inicio = (fi->inicio+1)%100;
	fi->quant--;
	return 1;	

}









