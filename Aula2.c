#include <stdio.h>
#include<stdbool.h>
#define N 10
typedef struct{
	int vetor[N]; //vetor com 10 elementos inteiros
	int topo; //controla o topo da pilha
}Pilhaestatica;

//Pilhaestatica p;
//p.vetor[]
//p.topo
//p.vetor[p.topo]

//(ponteiros)

//iniciar pilha
void iniciaPilha(Pilhaestatica *p)
{
	p->topo = 0;
}

//tamanho pilha
int tamanho(Pilhaestatica *p){
	return (p->topo);
}
//verificar pilha vazia
bool estaVazia(Pilhaestatica *p){
	return(p->topo == 0);
}
//verificar pilha cheia
bool estaCheia(Pilhaestatica *p){
	return(p->topo == N);
}

//imprime pilha
void imprimePilha(Pilhaestatica *p)
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
void empilhar(Pilhaestatica *p, int valor)
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
void desempilhar(Pilhaestatica *p)
{
	int x;
	if(!estaVazia(p)){
		x = p->vetor[p->topo-1];
		p->topo--;
	}
	else
	{
		printf("Aviso: A pilha está vazia. Não foi removido um valor!");
	}	
}

//função principal----------------------------------------------------------------------------------------------
int main()
{
	int i,j;
	Pilhaestatica p;
	iniciaPilha(&p);
	//aqui ja esta inicializada
	//empilhar(&p,10);
	imprimePilha(&p);

	for(i=0;i<N;i++)
	{
		empilhar(&p,i);
	}
	
	imprimePilha(&p);
	empilhar(&p,5);
	imprimePilha(&p);
	desempilhar(&p);
	imprimePilha(&p);
	for(j=p.topo;j>0;j--)
	{
		desempilhar(&p);
	}
	imprimePilha(&p);
	if(estaVazia(&p))
	{
		printf("A pilha esta vazia.\n");
	}
	printf("Tamanho: %d\n", tamanho(&p));
	
	return 0;
}
