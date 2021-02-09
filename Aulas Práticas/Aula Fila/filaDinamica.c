#include <stdio.h>
#include <stdlib.h>
#include "filaDinamica.h"


struct no{
	int valor; 
	struct no* prox;
};

struct filaDinamica
{	
	Tno *prim;
	Tno *fim;
	int quant;
	
};

TfilaDinamica* cria_filaDinamica(){
    TfilaDinamica* nova = (TfilaDinamica* ) malloc(sizeof(TfilaDinamica ));
	if(nova != NULL){
		nova->prim = NULL;
		nova->fim = NULL;
		nova->quant = 0;
		return nova;
	}	
}


int insere_filaDinamica(TfilaDinamica* fi, int valor){
	if (fi ==  NULL){
		return 0;
	}
	Tno* novoNo = (Tno*) malloc(sizeof(Tno)); 
	novoNo->valor = valor;
	if(fi->prim == NULL){
		novoNo->prox = NULL;
		fi->prim = novoNo;
		fi->fim = novoNo;
		return 1;
	}else{
		fi->fim->prox = novoNo;
		novoNo->prox = NULL;
		fi->fim = novoNo;
		return 1;
	}
}


int remove_filaDinamica(TfilaDinamica* fi){
	if (fi ==  NULL){
		return 0;
	}
	if (fi->fim == NULL)
		return 0;
	
	Tno *no = fi->inicio;
	
	fi->inicio = fi->inicio->prox;
	
	free(no);	
	
	if(fi->inicio == NULL)
		fi->fim = NULL;
	
	return 1;
}








