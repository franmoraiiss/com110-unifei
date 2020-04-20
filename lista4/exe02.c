#include <stdio.h>
#include <math.h>

//Descrição: o programa lê um número n e realiza as potências de 3 de 0 até n.
//Autor: Francisco Morais
//Data: 15/04/2020

int main(){

	int num = 3;
	int potencia, expoente;

	printf("Digite um número inteiro positivo: ");
	scanf("%d", &expoente);

	for(int i = 0; i <= expoente; i++){
		potencia = pow(num, i);
		printf("%d ", potencia);
	}

	printf("\n"); //apenas para ficar legível no fim do console

	return 0;
}