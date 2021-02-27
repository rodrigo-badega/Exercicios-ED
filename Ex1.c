#include <stdio.h>

/*
Exercicio 1. [Ponteiros] Um ponteiro pode ser usado para dizer a uma funcao onde ela deve depositar
o resultado de seus calculos. Escreva uma funcao que converta uma quantidade de minutos na notacao
horas/minutos. A funcao recebe como parametro:
• um numero inteiro (totalMinutos); e
• os enderecos de duas variaveis inteiras, horas e minutos.
A funcao deve entao atribuir valores as variaveis passadas por referencia, de modo que os valores atribuidos
respeitem as seguintes condicoes:
minutos < 60
60 * horas + minutos = totalMinutos
Escreva tambem a funcao principal (main) que use a funcao desenvolvida.

*/
//void calculaHorario(int totalMinutos,int* horas,int* minutos){}
void calculaHorario(int totalMin, int* hora,int* minuto)
{
	*hora = totalMin/60;
	*minuto= totalMin%60;
}

int main()
{
	int horario=100, hora=0, minuto=0;
	calculaHorario(horario, &hora, &minuto);
	printf("Horario: %d:%d \n", hora, minuto);
	//printf("%d", 60*hora+minuto);
	return 0;
}
