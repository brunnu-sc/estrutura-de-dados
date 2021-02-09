#include <stdio.h>
#include <stdlib.h>

typedef struct livro TADLivro;

TADLivro *livro_cria(char *titulo, char *autor, char *genero, int ano);

void imprimir(TADLivro *livro);
void modernismo(TADLivro *livro);
void ordenaLivros(TADLivro *livro);

