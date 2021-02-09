#include <stdio.h>
#include <stdlib.h>



/*
int main()
{
	int x = 10, *pont;

	pont = &x; //APONTA NO ENDEREÇO DE MEMORIA DE X
	*pont = x + 5; //MUDANDO O CONTEUDO QUE ESTA NO ENDEREÇO QUE ESTA APONTANDO

	printf("VALOR DO ENDERECO: %d\n", *pont);
	printf("ENDERECO DE MEMORIA QUE O PONTEIRO ESTA APONTANDO: %d\n", pont);
	printf("ENDERECO DE MEMORIA DO PONTEIRO: %d\n", &pont);

	return 0;
}
*/

/*
int main()
{
	struct horario
	{
		int hora;
		int minuto;
		int segundo;
	};

	struct horario agora, *depois;
	depois = &agora;

	(*depois).hora = 20; //VAI DA ERRO POIS ASSIM COMO NA MATEMATICA NA PROGRAMAÇÃO EXISTE A ORDEM DE PRECEDENCIA, ASSIM O COMPUTADOR VER *(depois.hora) = 20;
	(*depois).minuto = 40; //PRECISA DO PARENTESES MAS PODE ULTILIZAR A SETINHAS
	depois->segundo = 80; //FICA BEM MELHOR ULTILIZAR O -> QUE APONTA PRO MEMBRO DA ESTRUTURA

	printf("%d : %d : %d\n", agora.hora, agora.minuto, agora.segundo);

	return 0;
}
*/

int main()
{
	struct horario
	{
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};

	struct horario hoje; //ESTRUTURA hoje DO TIPO horario

	int hora = 200;
	int minuto = 300;
	int segundo = 400;

	hoje.pHora = &hora; //ESTRUTURA hoje DO TIPO horario ESTA APONTANDO NO ENDEREÇO DE MEMORIA hora
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;

	printf("Hora: %d\n", *hoje.pHora); //PRINTANDO O CONTEUDO QUE O PONTEIRO TA APONTANDO
	printf("Minuto: %d\n", *hoje.pMinuto);
	printf("Segundo: %d\n", *hoje.pSegundo);

	*hoje.pSegundo = 1000; //ALTERANDO O VALOR
	printf("Segundo: %d\n", *hoje.pSegundo);
	
	getchar(); //SERVE PARA SAIR DO PROGRAMA QUANDO CLICAR EM ALGUMA COISA
	
	return 0;
}




















