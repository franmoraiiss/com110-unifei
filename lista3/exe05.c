#include <stdio.h>

//Descrição: o programa converte os minutos em segundos
//Autor: Francisco Morais
//Data: 15/04/2020

int main(){

	float min, sec;

	do {

		printf("Insira a quantidade de minutos: ");
		scanf("%f", &min);
		sec = min * 60;

		if(min < 0) {
			printf("Tempo não assume valores negativos!\n");
		}

	} while(min < 0);

	printf("%.2f minutos possue %.2f segundos.\n", min, sec);

	return 0;
}