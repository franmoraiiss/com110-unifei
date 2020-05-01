#include <stdio.h>
#include <math.h>

int main(){

	double a, b, c, delta, x1, x2;

	printf("A equação de segundo grau tem o seguinte formato: ax^2 + bx + c\n");
	printf("Você deve saber os valores de a, b e c para realizar o cálculo\n");

	printf("Insira o valor de a: ");
	scanf("%lf", &a);

	if(a==0) {

		printf("O valor de a não pode ser zero para existir uma equação de segundo grau\n");
		
	} else {

		printf("Insira o valor de b: ");
		scanf("%lf", &b);

		printf("Insira o valor de c: ");
		scanf("%lf", &c);

		delta = ((b*b)-4*a*c);

		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);

		if(delta > 0) {

			printf("A equação (%.2lf)x^2 + (%.2lf)x + %.2lf possui duas raízes, são elas:\n", a, b, c);
			printf("x1 = %lf x2 = %lf\n", x1, x2);

		} else if(delta == 0){

			printf("A equação (%.2lf)x^2 + (%.2lf)x + %.2lf possui somente uma raiz, que é:\n", a, b, c);
			printf("x1 = x2 = %lf\n", x1);

		} else {

			printf("O seu delta deu negativo, logo não existem raízes reais para sua equação.\n");

		}
	}

	return 0;
}