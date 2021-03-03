#include "pilhaDinamica.h"

//inicia a pilha dinamica
void iniciaPilhaD(PilhaDinamica *pd)
{
	pd->topo = NULL;
	pd->tamanho = 0;
}

//tamanho da pilha
int tamanhoPilha(PilhaDinamica *pd)
{
	return(pd->tamanho);
}

//verifica pilha vazia
bool estaVazia(PilhaDinamica *pd)
{
	return(pd->tamanho == 0);
}

//empilha valores
void empilha(PilhaDinamica *pd, int valor)
{
	PtrNoPilha Aux;
	Aux= (PtrNoPilha)malloc(sizeof(PtrNoPilha));
	Aux->valor = valor;
	Aux->proximo = pd->topo;
	pd->topo = Aux;
	pd->tamanho ++;
}

//desempilha valores
int desempilha(PilhaDinamica *pd)
{
	int v=0;
	if(!estaVazia(pd)){
	//passo 1
	PtrNoPilha Aux;
	//passo 2
	Aux = pd->topo;
	//passo 3
	v= Aux->valor;
	//passo 4
	pd->topo = Aux->proximo; //topo = pd->topo->proximo
	//passo 5
	free(Aux);
	//passo 6
	pd->tamanho--;
	}
	else
	{
		printf("Pilha esta vazia. Nao foi removido valor.\n");
	}
	return v;
}

//imprime a pilha dinamica
void imprimePilha(PilhaDinamica *pd)
{
	PtrNoPilha temp;
	printf("{");
	for(temp= pd->topo; temp!=NULL;temp = temp->proximo)
	{
		printf("%d ", temp->valor);
	}
	printf("}\n");
	free(temp);
}

//Desfaz a pilha

void destroiPilhaD(PilhaDinamica *pd)
{
	if(!estaVazia(pd))
	{
		int aux;
		for(aux=pd->tamanho; aux>0; aux--)
		{
			desempilha(pd);
			//printf("Tamanho atual:%d\n", pd->tamanho);
		}
		pd->topo = NULL;
	}
	else
	{
		printf("Pilha vazia.\n");
	}
}


//alternativa destruir pilha
/*
void destroiPilhaD(PilhaDinamica *pd) 
{
  printf("@Destroying stack!\n");
  PtrNoPilha remover;
  while(pd->topo!= NULL) 
 	{
    remover = pd->topo;
    pd->topo = pd->topo->proximo;
    free(remover);
    pd->tamanho--;
	}
}
*/

//retorna o elemento do topo
PtrNoPilha topoPilhaD(PilhaDinamica *pd)
{
	PtrNoPilha v;
	if(!estaVazia(pd))
	{
		v=pd->topo;
		return v;
	}
	else
	{
		printf("Aviso: Pilha vazia. Nao ha elementos a serem mostrados!\n");
	}
}
