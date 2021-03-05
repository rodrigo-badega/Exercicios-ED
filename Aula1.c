#include <stdio.h>

//Aula 1- 23/02/2021

//Ponteiros
/*
O que eh um ponteiro? Eh uma variavel que guarda ENDERECOS DE MEMORIA!

int *p; => Nesse caso, p eh um ponteiro que armazena o endereco de memoria de uma variavel do tipo int
supondo que o valor armazenado em p seja 1032, tem-se que:

p=&n; =>Sendo assim temos que 1032 eh o endereço de memoria de n.
*p eh o valor contido na memoria apontada por p. Ou seja, se n=14, *p=14.
*/

//Alocacao Dinamica
/*
Para nao disperdicar ou faltar memoria, eh ideal que se utilize da alocacao dinamica de memoria!
possui uma biblioteca "stdlib.h"

Quais os tipos de funcoes usadas em ED
int tam=5;
vet = malloc(tam*sizeof(int)) => Nesse caso eh alocado dinamicamente um vetor de tamanho 5 ints
free(vet) => Apos o uso do vetor na funcao, eh necessario liberar a memoria reservada
*/

//Recursao
/*
O que eh uma funcao recursiva? Uma funcao eh dita recursiva quando no seu codigo existe uma chamada pra si mesma!

int fatorial(int n){
	int fat;
	if(
}


*/
