#include <stdio.h>

void main() {

	float a, b, c, d, media;

	printf("Calcular média final (Inserir números de 0 à 10)\n");
	printf("Insira sua primeira nota: ");
	scanf("%f", &a);

	printf("Insira sua segunda nota: ");
	scanf("%f", &b);

	printf("Insira sua terceira nota: ");
	scanf("%f", &c);

	printf("Insira sua quarta nota: ");
	scanf("%f", &d);

	media = (a+b+c+d) / 4;

	if(media >= 6){
		printf("Sua média aritimética final foi %.2f. Você foi APROVADO!\n", media);
	} else
	{
		printf("Sua média aritimética final foi %.2f. Você foi REPROVADO!\n", media);
	}

	return;
}