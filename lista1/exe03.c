#include <stdio.h>

void main(){

	float salario, novosalario;

	printf("Digite seu salário: ");
	scanf("%f", &salario);

	novosalario = salario*1.25;

	printf("Seu novo salário é: %.2f\n", novosalario);


	return;
}