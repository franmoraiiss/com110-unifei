#include <stdio.h>

//Descrição: o programa calcula o IMC do usuário
//Autor: Francisco Morais
//Data: 15/04/2020

int main() {

	double massa, altura, imc;

	printf("Calculadora de IMC\n");
	
	do {
		printf("Insira sua massa (em kg): ");
		scanf("%lf", &massa);

		if(massa <= 0){
			printf("-- Digite um valor maior que 0!\n");
		}
	} while (massa <= 0);

	do {
		printf("Insira sua altura (em metros): ");
		scanf("%lf", &altura);

		if(altura <= 0){
			printf("-- Digite um valor maior que 0!\n");
		}
	} while (altura <= 0);

	imc = massa / (altura * altura);

	printf("Seu IMC é: %.2lf\n", imc);

	return 0;
}