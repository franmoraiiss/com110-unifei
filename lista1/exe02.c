#include <stdio.h>

void main() {

	float a, b, c, media;
	int peso_a, peso_b, peso_c;

	printf("Calculadora de notas - insira somente números de 1 à 10!\n");

	printf("Insira sua primeira nota: ");
	scanf("%f", &a);
	printf("Insira sua segunda nota: ");
	scanf("%f", &b);
	printf("Insira sua terceira nota: ");
	scanf("%f", &c);

	printf("Insira o peso da primeira nota: ");
	scanf("%d", &peso_a);
	printf("Insira o peso da segunda nota: ");
	scanf("%d", &peso_b);
	printf("Insira o peso da terceira nota: ");
	scanf("%d", &peso_c);

	media = (a*peso_a + b*peso_b + c*peso_c) / (peso_a + peso_b + peso_c);

	printf("A média ponderada de suas notas é: %f\n", media);

	return;
}