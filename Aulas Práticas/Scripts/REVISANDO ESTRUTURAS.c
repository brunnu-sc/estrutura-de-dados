#include <stdio.h>
#include <stdlib.h>


//LEMBRETE: Ctrl + f = Localizar e Substituir nome

int main(void)
{
	struct horario 		//DEFINIÇÃO DE UMA ESTRUTURA
	{
		int horas;
		int minutos;
		int segundos;
		char nome;
		float num;
	};

	struct horario agora; //DECLAREI UMA ESTRUTURA DO TIPO HORARIO

	agora.horas = 9;	//INICIALIZANDO DOS MEMBROS DA ESTRUTURA
	agora.minutos = 18;
	agora.segundos = 20;
	printf("%i : %i : %i\n",  agora.horas,agora.minutos,agora.segundos);


	struct horario depois;	//DECLAREI UMA OUTRA ESTRUTURA DO TIPO HORARIO

	depois.horas = agora.horas + 10;
	depois.minutos = agora.minutos;
	depois.segundos = agora.segundos - 5;
	printf("%i : %i : %i\n",  depois.horas,depois.minutos,depois.segundos);
		   
	agora.nome = 'B';
	agora.num = 10 + 2.5 / 2;
	printf("%c\n%f\n",  agora.nome, agora.num);
	return 0;
}
