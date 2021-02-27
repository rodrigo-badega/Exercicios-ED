#include <stdio.h>

/*
Exercicio 3. [Recursao] Escreva uma funcao recursiva para calcular o valor de um numero inteiro de base
x elevada a um expoente inteiro y.

*/

int calculaPotencia(int x, int y)
{
	if(y == 1){
	
	return x;	
	}
	else{
	//x= x*x;
	//printf("%d", x);	
	return x*calculaPotencia(x,y-1);
	}
}

int main()
{
	int a=2,b=3,c=0;
	c=calculaPotencia(a,b);
	printf("%d", c);
	return 0;
}
