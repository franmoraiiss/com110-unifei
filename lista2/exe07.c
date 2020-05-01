#include <stdio.h>

void main() {

	float a, b, maior, menor;

	scanf("%f", &a);
	scanf("%f", &b);

	if(a<b){
		menor = a;
		maior = b;
	} else{
		menor = b;
		maior = a;	
	}

	//SOMENTE UM ESCREVA
	printf("%.2f %.2f\n", menor, maior);


	return;
}