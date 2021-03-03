//  pilhaEstatica.h
//  Stacks


#ifndef pilhaEstatica_h
#define pilhaEstatica_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXTAM 100
/*
/ tipo abstrato para item, que será inserido na pilha
typedef struct {
  int chave;
  // podemos adicionar mais coisas aqui
} Objeto;
*/

// tipo abstrato de pilha 
typedef struct {
  //Objeto array[MAXTAM];
  int vetor[MAXTAM];
  int topo;
} pilhaEstatica;

/* funções de manipulação */
void iniciaPilha(pilhaEstatica *p);
bool estaVazia(pilhaEstatica *p);
bool estaCheia(pilhaEstatica *p) ;
void empilhar(pilhaEstatica *p, int valor);
void desempilhar(pilhaEstatica *p);
int tamanho(pilhaEstatica *p);
int topo(pilhaEstatica *p);
void imprimePilha(pilhaEstatica *p);

#endif /* pilhaEstatica_h */
