#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <assert.h>

void liberar_memoria_impl ( node * node_ptr );

void liberar_memoria ( tree * tree_ptr );

tree * init_tree ( );

node * init_node ( int valor );

int altura ( const node * const node_ptr );

int fator_bal ( const node * const node_ptr );

node * rotacionar_esq_esq ( const node * const node_ptr );

node * rotationar_esq_dir (const node * const node_ptr );

node * rotacionar_dir_esq ( const node * const node_ptr );

node * rotacionar_dir_dir ( const node * const node_ptr );

node * balancear_node ( node * const node_ptr );

void balancear_tree ( tree * const tree_ptr );

void inserir ( tree * tree_ptr, int valor );

node * encontrar_valor (const tree * const tree, int valor );

void listar ( node * node_ptr );


