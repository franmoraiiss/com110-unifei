#include <stdio.h>
#include <math.h>

void main(){

	float salario, novosalario;

	printf("Insira seu salário: ");
	scanf("%f", &salario);

	if(salario <= 1000) {
		novosalario = salario*1.15;

	} else if(salario > 1000 && salario < 2000){
		novosalario = salario*1.10;

	} else if(salario >= 2000) {
		novosalario = salario*1.05;
		
	}

	printf("O novo salário do funcionário será: %.2f\n", novosalario);

	return;
}