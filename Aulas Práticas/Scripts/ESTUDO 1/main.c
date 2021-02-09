#include <stdio.h>
#include <stdlib.h>

// É SEMPRE BOM ULTILIZAR O typedef PRA FACILITAR PRA CHAMAR SÓ DE No.
typedef struct no No;

struct no
{
	int num;
	struct no *prox;  							//CRIANDO UM PONTEIRO DO TIPO struct no PQ O PONTEIRO PRECISA SER DO MESMO TIPO DE ESTRUTURA .
};

//CRIAR UMA FUNÇÃO PRA CRIAR UM No, VAI ALOCAR POR MEIO DO malloc E VAI RETORNAR UM ponteiro
No* criar_no()
{
	No *novo = (No*)malloc(sizeof(No)); 		//malloc RECEBE UMA QUANTIDADE DE BYTE, E RETORNA UM ponteiro DO TIPO void
	return novo;
}

//FUNÇÃO DE INSERIR No NO INICIO.
No* inserir_no_inicio(No* Lista, int dado)      //VAI RECEBER COMO PARAMETRO Lista
{
	No *novo_no = criar_no(); 					//CRIANDO UM NÓ.
	novo_no->num = dado;
	if(Lista == NULL)   						//SE ELA ESTIVER VAZIA.
	{
		Lista = novo_no;
		novo_no->prox = NULL;
	}
	else
	{
		novo_no->prox = Lista;
		Lista = novo_no;
	}
	return Lista;
}

//FUNÇÃO PRA IMPRIMIR A LISTA.
void imprimir_lista(No* Lista)
{
	No *aux = Lista;
	while(aux != NULL)
	{
		printf("%d\n", aux->num);
		aux = aux->prox;
	}
}

int main()
{
	No *Lista = NULL; 					// ESSA LISTA VAI APONTAR PRA NULL PQ ELA VAI SER INICIALMETE VAZIA
										// Lista VAI GUARDAR SOMENTE O ENDEREÇO DO 1º ELEMENTO

	Lista = inserir_no_inicio(Lista, 10);
	Lista = inserir_no_inicio(Lista, 20);
	Lista = inserir_no_inicio(Lista, 30);
	Lista = inserir_no_inicio(Lista, 40);
	
	imprimir_lista(Lista);
	return 0;
}
