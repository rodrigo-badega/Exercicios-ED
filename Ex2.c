#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
Exercicio 2. [Arquivos] Faca um programa que receba do usuario um arquivo texto. Crie outro arquivo
texto de saida contendo o texto do arquivo de entrada original, porem substituindo todas as vogais pelo
caractere ‘*’. Alem disso, mostre na tela quantas linhas esse arquivo possui. Dentro do programa faca
o controle de erros, isto e, insira comandos que mostre se os arquivos foram abertos com sucesso, e caso
contrario, imprima uma mensagem de erro encerrando o programa.
*/

int main()
{
	FILE *arq, *saida;
	char texto[40];
	if((arq = fopen("teste.txt","r")) == NULL){
		printf("Ocorreu um erro no arquivo\n");
		exit(1);
	}
		if((saida = fopen("saida.txt","w")) == NULL){
		printf("Ocorreu um erro no arquivo\n");
		exit(1);
	}

	int contagem = 0;
    int caractere;
    do {
        caractere = fgetc(arq);
        if(caractere == '\n' || caractere == EOF) {
            contagem++;
        }
        else if(tolower(caractere) == 'a' || tolower(caractere) == 'e' || tolower(caractere) == 'i' || tolower(caractere) == 'o' || tolower(caractere) == 'u'){
        	caractere = '*';
        	
		}

		if(caractere != EOF){
			putc (caractere, saida);
		}
    } while(caractere != EOF);
    printf("\nO arquivo possui %d linhas.\n", contagem);
	fclose(arq);
	fclose(saida);
	return 0;
}
