#include <stdio.h>

//Descrição: O programa recebe um N >= 2 e constrói um triangulo retangulo de acordo com o N (numero de linhas)
//Autor: Francisco Morais
//Data: 15/04/2020

int main() {

	int num;
	int cont_a, cont_b;

	do {
		printf("Digite um número inteiro N (desde que N >= 2): ");
		scanf("%d", &num);

		if(num < 2) {
			printf("-- Permitido apenas valores maiores ou iguais a 2!\n");
		}

	} while(num < 2);

	printf("\n"); //apenas pular 1 linha

    for (cont_a = 1; cont_a <= num; cont_a++)
    {
    	for (cont_b = 1; cont_b <= cont_a; cont_b++) {
    		printf("#");
       	}

        printf("\n");
   	}

	printf("\n"); //apenas pular 1 linha

	return 0;
}