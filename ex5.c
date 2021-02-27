#include <stdio.h>

/*
Exercicio 5. [Structs, Ponteiros] Defina um tipo abstrato de dados que ira representar bandas de musica.
Essa estrutura deve ter o nome da banda, que tipo de musica ela toca, o numero de integrantes, e em que
posicao do ranking essa banda esta dentre as suas 5 bandas favoritas.
a) Crie uma funcao para preencher as 5 estruturas de bandas criadas no exemplo passado;
b) Apos criar e preencher, exiba todas as informacoes das bandas/estruturas. Nao se esqueca de usar o
operador -> para preencher os membros das structs;
c) Crie uma funcao que peca ao usuario um numero de 1 ate 5. Em seguida, seu programa deve exibir
informacoes da banda cuja posicao no seu ranking eh a que foi solicitada pelo usuario.
*/

typedef struct{
	char nome[40];
	char estilo[15];
	int pessoas;
	int rank;
}Banda;
//a)
void preencheBanda(Banda *bandas, int tam)
{
	int i;
	for(i=0;i<tam;i++){
	printf("Insira o nome da banda:");
	fgets (bandas[i].nome, 40, stdin);
	fflush(stdin);
	printf("Insira o estilo da banda:");
	fgets (bandas[i].estilo, 15, stdin);
	fflush(stdin);
	printf("Insira o numero de integrantes:");
	scanf("%d", &bandas[i].pessoas);
	printf("Insira a posicao no ranking:");
	scanf("%d", &bandas[i].rank);
	fflush(stdin);
	}
}

void encontraBanda(Banda *bandas, int tam)
{
	int num=0;
	printf("Digite um numero de 1 a %d:", tam);
	scanf("%d", &num);
	printf("Nome:%s", bandas[num].nome);
	printf("Estilo:%s", bandas[num].estilo);
	printf("Integrantes:%d\n", bandas[num].pessoas);
}

int main()
{
	Banda bandas[5];
	int tamanho=5, i;
	preencheBanda(bandas,tamanho);
	//b
	for(i=0;i<tamanho;i++)
	{
		printf("Nome: %s", bandas[i].nome);
		printf("Estilo: %s", bandas[i].estilo);
		printf("Integrantes: %d\n", bandas[i].pessoas);
		printf("Rank: %d\n\n", bandas[i].rank);
	}
	encontraBanda(bandas,tamanho);
	
	return 0;
}
