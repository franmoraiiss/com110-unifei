#include <stdio.h>
#include <math.h>

//Descrição: o programa lê um número e realiza as potências dele de 0 a 10.
//Autor: Francisco Morais
//Data: 15/04/2020

int main(){

	int num, potencia;
	int expoente = 10;

	printf("Digite um número inteiro positivo: ");
	scanf("%d", &num);

	for(int i = 0; i <= expoente; i++){
		potencia = pow(num, i);
		printf("%d ", potencia);
	}

	printf("\n"); //apenas para ficar legível no fim do console

	return 0;
}