
#ifndef pilhaDinamica_h
#define pilhaDinamica_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
typedef struct {
    int chave;
} Objeto;

typedef struct NoPilha *PtrNoPilha;

typedef struct NoPilha{
  Objeto obj;
  PtrNoPilha proximo;
} NoPilha;

typedef struct {
  PtrNoPilha topo;
  int tamanho;
} PilhaDinamica;
*/
typedef struct NoPilha *PtrNoPilha;

typedef struct NoPilha{
	int valor;
	PtrNoPilha proximo;//struct NoPilha *proximo
}NoPilha;

typedef struct {
	PtrNoPilha topo;
	int tamanho;
}PilhaDinamica;

void iniciaPilhaD(PilhaDinamica *pd);
bool estaVazia(PilhaDinamica *pd);
void empilha(PilhaDinamica *pd, int valor);
int desempilha(PilhaDinamica *pd);
int tamanhoPilha(PilhaDinamica *pd);
PtrNoPilha topoPilhaD(PilhaDinamica *pd);
void imprimePilha(PilhaDinamica *pd);
void destroiPilhaD(PilhaDinamica *pd);

#endif /* pilhaDinamica_h */
