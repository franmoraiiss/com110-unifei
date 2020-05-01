#include <stdio.h>

void main() {

	double a, b, c, maior, menor;

	printf("Insira o primeiro número: ");
	scanf("%lf", &a);

	printf("Insira o segundo número: ");
	scanf("%lf", &b);

	printf("Insira o terceiro número: ");
	scanf("%lf", &c);

	maior = a;
	menor = a;

	if (b > maior) {
		maior = b;
	} else if(b < menor) {
		menor = b;
	}

	if (c > maior) {
		maior = c;
	} else if(c < menor){
		menor = c;
	}

	if(a == b && a == c && b == c) {
		printf("Todos os números são iguais!\n");
	} else 	{
		printf("O menor número é: %.4f\n", menor);
		printf("O maior número é: %.4f\n", maior);
	} 

	return;
}