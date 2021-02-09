#include "fila_dinamica.h"
struct no
{
	int valor;
	struct no *prox;
};
struct fila
{
	TNO *prim;
	TNO *fim;
	int quant;
	
};

FILA *criar_fila(){
	FILA *nova=(FILA*)malloc(sizeof(FILA*));
	if(nova!=NULL){
		nova->prim =NULL;
		nova->fim=NULL;
		nova->quant = 0;
		return nova;
	}
	
}

int insere_fila(FILA *fi, int valor){
	if(fi==NULL){
		return 0;
	}
	TNO *novoNO = (TNO*)malloc(sizeof(TNO));
	if(fi->prim ==NULL){
		novoNO->prox=NULL;
		fi->prim= novoNO;
		fi->fim=novoNO;
		return 1;
	}else{
		fi->fim->prox =novoNO;
		novoNO->prox=NULL;
		fi->fim =novoNO;
		return 1;
	}
	
}
int remove_fila(FILA *fi){
	if(fi==NULL){
		return 0;
	}
	if(fi->fim ==NULL){
		return 0;
	}
	TNO *no =fi->prim;
	fi->prim =fi->prim->prox;
	free(no);
	if(fi->prim ==NULL){
		fi->fim==NULL;
		return 1;
	}
	
	
	
}