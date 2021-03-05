#include "pilhaDinamica.h"
#include "pilhaDinamica.c"

//funcao principal--------------------------------------------------------------------
int main()
{
	PilhaDinamica pd;
	int retorno=-12;
	iniciaPilhaD(&pd);
	imprimePilha(&pd);
	empilha(&pd,10);
	imprimePilha(&pd);
	empilha(&pd,20);
	imprimePilha(&pd);
	empilha(&pd,15);
	imprimePilha(&pd);
	empilha(&pd,12);
	imprimePilha(&pd);
	empilha(&pd,8);
	imprimePilha(&pd);
	empilha(&pd,10);
	imprimePilha(&pd);
	printf("Tamanho: %d\n", pd.tamanho);
	empilha(&pd,20);
	imprimePilha(&pd);
	retorno = desempilha(&pd);
	imprimePilha(&pd);
	printf("Tamanho: %d\n", pd.tamanho);
	printf("valor retornado: %d\n", retorno);
	destroiPilhaD(&pd);
	//imprimePilha(&pd);
	if(estaVazia(&pd))
	{
		printf("pilha esvaziada.\n");
	}
	imprimePilha(&pd);
	return 0;
}
