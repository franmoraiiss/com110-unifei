#include <stdio.h>

void main() {

	float a, b, c, maior, meio, menor;

	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	meio = c;

	if(a > b){
		maior = a;
		menor = b;
	} else {
		menor = a;
		maior = b;
	}

	if(c > maior){
		meio = maior;
		maior = c;
	} else if(c < menor) {
		meio = menor;
		menor = c;
	}

	//SOMENTE UM ESCREVA
	printf("%.2f %.2f %.2f", menor, meio, maior);

	return;
}