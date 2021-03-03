#include "pilhaEstatica.h"

//iniciar pilha
void iniciaPilha(pilhaEstatica *p)
{
	p->topo = 0;
}

//tamanho pilha
int tamanho(pilhaEstatica *p){
	return (p->topo);
}
//verificar pilha vazia
bool estaVazia(pilhaEstatica *p){
	return(p->topo == 0);
}
//verificar pilha cheia
bool estaCheia(pilhaEstatica *p){
	return(p->topo == MAXTAM);
}

//imprime pilha
void imprimePilha(pilhaEstatica *p)
{
	int i;
	int tam = tamanho(p);
	printf("{");
	for(i=0;i<p->topo;i++)
	{
		printf("|%d| ", p->vetor[i]);
	}
	printf("}\n");
}

//empilha valor
void empilhar(pilhaEstatica *p, int valor)
{
	if(!estaCheia(p)){
		p->vetor[p->topo] = valor;
		p->topo++;	
	}
	else
	{
		printf("Aviso: A pilha esta cheia. O valor nao foi inserido!\n");
	}
}
//desempilha valor
void desempilhar(pilhaEstatica *p)
{
	int x;
	if(!estaVazia(p))
	{
		x = p->vetor[p->topo-1];
		p->topo--;
	}
	else
	{
		printf("Aviso: A pilha está vazia. Não foi removido um valor!\n");
	}	
}

int topo(pilhaEstatica *p)
{
	int valor=0;
	if(!estaVazia(p))
	{
		valor = p->topo;
		return valor;
	}
	else
	{
		printf("Aviso: Pilha vazia.\n");
	}
}
