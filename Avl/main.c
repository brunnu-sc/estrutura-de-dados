#include "avl.h"

/*int main ( int argc, char **argv )
{
	tree * tree = NULL;
	int i;
	int valor;
	tree = init_tree ( );
	srand ( time ( NULL ) );
	for ( i = 0; i < 100; i++ )
	{
		do
		{
			valor = rand ( ) % 1000;
		} while ( encontrar_valor ( tree, valor ) );
		inserir ( tree, valor );
	}
	avl_traverse_dfs ( tree );
	system ( "pause" );
	return 0;
}*/

int main ( )
{
	tree * tree_ptr = init_tree ( );

	int op, valor;
	while ( 1 )
	{
		puts ( "------------------------------"
			   "\n| 0- Sair;"
			   "\n| 1- Inserir;"
			   "\n| 2- Listar;"
			   "\n------------------------------"
			   "\n\n| Opcao: " );
		scanf_s ( "%d", &op );
		switch ( op )
		{
		case 0:
			liberar_memoria ( tree_ptr );
			system ( "pause" );
			exit ( 0 );
			break;
		case 1:
			puts ( "\nInforme o valor: " );
			scanf_s ( "%d", &valor );
			inserir ( tree_ptr, valor );
			break;
		case 2:
			if ( tree_ptr->raiz == NULL )
			{
				puts ( "\n| Arvore vazia!\n\n" );
			}
			else
			{
				puts ( "\n" );
				listar ( tree_ptr->raiz );
				puts ( "\n\n" );
			}
			break;
		}
	}
}
