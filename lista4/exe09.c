#include <stdio.h>

//Descrição: o programa printa uma mensagem de bem-vindo utilizando loops
//Autor: Francisco Morais
//Data: 15/04/2020

int main() {

	int maxcolunas = 22;	//colunas de 0 a 22 (23 colunas)
	int maxlinhas = 6;	//linhas de 0 a 6 (7 linhas)

	int linha, coluna; //colunas e linhas atuais

	for (linha = 0; linha <= maxlinhas; linha++) {
        
        for (coluna = 0; coluna <= maxcolunas; coluna++) {

            if (linha == 0 || linha == maxlinhas || coluna == 0 || coluna == maxcolunas && linha != 3 && coluna != 4){
                printf("#");

            } else if(linha == 3 && coluna == 4) {
               	printf("SEJA BEM-VINDO!");

            } else if(linha == 3 && coluna == maxcolunas - 14) {

            	//eu subtrai 14 em maxcolunas pois o número de caracteres presente em "SEJA BEM-VINDO!" é 15, porém, comecei a 
            	//frase no caracter 0, logo de 0 a 14 existem 15 caracteres.
            	//quando eu escrevo a frase, ela empurra 15 caracteres a frente, logo é necessário subtrai-los.

               	printf("#");								

            } else {
                printf(" ");

            }

        }

        printf("\n");
    }


	return 0;
}
