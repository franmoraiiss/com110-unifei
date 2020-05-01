#include <stdio.h>

void main(){

	float a, b, c, media;

	printf("Calculadora de média - informe apenas números!\n");

	printf("Informe sua primeira nota: ");
	scanf("%f", &a);

	printf("Informe sua segunda nota: ");
	scanf("%f", &b);	

	printf("Informe sua terceira nota: ");
	scanf("%f", &c);

	media = (a + b + c) / 3;

	printf("A média aritmética de suas notas é: %f\n", media);


	return;
}