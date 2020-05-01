#include <stdio.h>
#include <math.h>

int main() {

	double a, b, c, media;
	char escolha;

	printf("Insira seu primeiro número: ");
	scanf("%lf", &a);

	printf("Insira seu segundo número: ");
	scanf("%lf", &b);

	printf("Insira seu terceiro número: ");
	scanf("%lf", &c);

	printf("\n(a) Média aritimética: (n1 + n2 + n3)/3\n");
	printf("(b) Média geométrica: (n1 * n2 * n3) ^ 1/3\n");
	printf("(c) Média ponderada: ((1 * n1) + (2 * n2) + (3 * n3))/6\n");

	printf("\nQual opção de média você deseja fazer -> ");
	scanf(" %c", &escolha);

	if(escolha == 'a')
	{
		media = (a+b+c)/3;
		printf("Média aritimética: %lf\n", media);
	} else if (escolha == 'b')
	{
		double x = a*b*c;
		double y = (1.0/3.0);

		media = pow(x, y);
		printf("Média geométrica: %lf\n", media);
	} else if (escolha == 'c')
	{
		media = ((1*a) + (2*b) + (3*c))/6;
		printf("Média ponderada: %lf\n", media);
	}

	return 0;
}