#include <stdio.h>

/*
Exercicio 4. [Alocacao Dinamica] Faca um programa que leia um valor N e crie dinamicamente um
vetor com essa quantidade de elementos. Em seguida, passe esse vetor para uma funcao que vai ler os
elementos desse vetor. Depois, no programa principal, imprima os valores do vetor preenchido. Alem disso,
antes de finalizar o programa, lembre-se de liberar a area de memoria alocada para armazenar os valores do
vetor.
*/

void lerVetor(int *vet, int tam)
{
	int i;
	for(i=0;i<tam;i++)
	{
		printf("Digite o valor:");
		scanf("%d", &vet[i]);
	}	
}


int main()
{
	int tam, *vet;
	printf("Tamanho do vetor:");
	scanf("%d", &tam);
	vet= malloc(tam*sizeof(int));
	lerVetor(vet, tam);
		int i;
	for(i=0;i<tam;i++)
	{
		printf("%d ", vet[i]);
	}
	free(vet);
	return 0;
}
