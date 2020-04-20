#include <stdio.h>

//Descrição: O programa pede 2 números reais e realiza as 4 operações básicas entre eles
//Autor: Francisco Morais
//Data: 15/04/2020

int main() {

	double num1, num2;
	double soma, mult, div, sub;

	printf("Digite seu primeiro número real: ");
	scanf("%lf", &num1);

	printf("Digite seu segundo número real: ");
	scanf("%lf", &num2);

	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;

	if(num2 == 0) {
		printf("SOMA: %.3f\n", soma);
		printf("SUBTRAÇÃO: %.3f\n", sub);
		printf("MULTIPLICAÇÃO: %.3f\n", mult);
		printf("DIVISÃO: não existe pois o denominador deve ser diferente de 0\n");
	} else {
		div = num1 / num2;

		printf("SOMA: %.3f\n", soma);
		printf("SUBTRAÇÃO: %.3f\n", sub);
		printf("MULTIPLICAÇÃO: %.3f\n", mult);
		printf("DIVISÃO: %.3f\n", div);
	}

	return 0;
}