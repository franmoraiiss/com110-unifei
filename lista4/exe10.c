#include <stdio.h>

//Descrição: o programa recebe a velocidade atual, compara com a máxima e verifica se houve multa.
//Autor: Francisco Morais
//Data: 15/04/2020

int main() {

	double vatual, vmax, percentual;

	do {
		printf("Digite a velocidade atual do veículo: ");
		scanf("%lf", &vatual);

		if(vatual < 0) {
			printf("Não existe velocidade negativa!\n");
		}

	} while (vatual < 0);

	do {
		printf("Digite a velocidade máxima da via: ");
		scanf("%lf", &vmax);

		if(vmax <= 0) {
			printf("A velocidade máxima deve ser um valor positivo!\n");
		}

	} while (vmax <= 0);

	
	percentual = (vatual * 100) / vmax;

	if(percentual <= 100) {
		printf("Não houve multa!\n");
	} else if(percentual <= 120) {
		printf("O valor da multa é R$ 85,13\n");
	} else if(percentual > 120 && percentual <= 150) {
		printf("O valor da multa é R$ 127,69\n");
	} else if(percentual > 150) {
		printf("O valor da multa é R$ 574,62\n");
	}


	return 0;
}