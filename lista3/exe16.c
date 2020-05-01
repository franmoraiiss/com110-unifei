#include <stdio.h>

//Descrição: o programa recebe 2 valores inteiros e realiza a tabuada de 1 a 10, de todos os números entre eles, inclusive eles.
//Autor: Francisco Morais
//Data: 15/04/2020

int main() {

	int num1, num2, resultado;

	int cont_a, cont_b;

	printf("Digite seu primeiro valor inteiro: ");
	scanf("%d", &num1);

	printf("Digite seu segundo valor inteiro: ");
	scanf("%d", &num2); 
	
	if(num1 >= num2) {
		for(cont_a = num2; cont_a <= num1; cont_a++) {
   			for(cont_b = 0; cont_b <= 10; cont_b++) {
  				resultado = cont_a * cont_b;
  				printf("\n%d x %d = %d",cont_a, cont_b, resultado);	
  			}

  			printf("\n");
		}
	}

  	if(num2 >= num1) {
  		for(cont_a = num1; cont_a<= num2; cont_a++) {
   			for(cont_b = 0; cont_b <= 10; cont_b++) {
  				resultado = cont_a * cont_b;
  				printf("\n%d x %d = %d",cont_a, cont_b, resultado);	
  			}

  			printf("\n");
		}
	}

 
  	printf("\n\n");

	return 0;
}