#include <stdio.h> 

//Descrição: o programa  mostra em ordem crescente e decrescente os números de 1 a 20, depois mostra apenas
//			 números ímpares entre 1 e 20.
//Autor: Francisco Morais
//Data: 15/04/2020

int main() {

	int a = 1;	//contador até 20
	int b = 20;	//contador até 1
	int c = 1;	//contador até 20

	while(a <= 20) {
		printf ("%d ", a);
		a = a + 1;
	}

	printf("\n"); //apenas para pular 1 linha

	while(b >= 1) {
		printf("%d ", b);
		b = b - 1;
	}

	printf("\n"); //apenas para pular 1 linha

	while(c <= 20) {
		if((c % 2) != 0) {
			printf("%d ", c);
		}

		c = c + 1;
	} 

	printf("\n"); //apenas para pular 1 linha

	return 0;
}