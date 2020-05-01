#include <stdio.h>
#include <math.h>

int main() {

	float cateto_a, cateto_b, hipotenusa;

	printf("Insira o valor do primeiro cateto: ");
	scanf("%f", &cateto_a);

	printf("Insira o valor do segundo cateto: ");
	scanf("%f", &cateto_b);

	hipotenusa = sqrt((cateto_a * cateto_a) + (cateto_b * cateto_b));

	printf("O valor da hipotenusa é: %f\n", hipotenusa);


	return 0;
}