#include <stdio.h>

void main() {

	float salario, novosalario, aumento;

	printf("Digite seu salario: ");
	scanf("%f", &salario);

	printf("Digite o pe'rcentual de aumento salarial: ");
	scanf("%f", &aumento);

	novosalario = salario * ((aumento / 100) + 1);

	printf("Seu novo salario após um aumento de %.2f%% é de: %.2f\n", aumento, novosalario);


	return;
}