#include <stdio.h>

//Descrição: o programa recebe dois números inteiros, e mostra todos os números inteiros entre eles.
//Autor: Francisco Morais
//Data: 15/04/2020

int main() {

	int num1, num2;

	printf("Digite o primeiro número inteiro: ");
	scanf("%d", &num1);

	printf("Digite o segundo número inteiro: ");
	scanf("%d", &num2);

	printf("\n"); //pular 1 linha

	if(num1 == num2 || (num1 - num2) == 1 || (num2 - num1) == 1) {
		printf("Não existem números inteiros entre %d e %d.", num1, num2);
	}

	if(num1 < num2){
		for(num1 = num1 + 1; num1 < num2; num1++){ 	//adicionei 1 ao num1 para que o próprio número não seja mostrado
			printf("%d ", num1);			//assim, serão mostrados somente os números entre num1 e num2
		}
	}

	if(num2 < num1) {
		for(num2 = num2 + 1; num1 > num2; num2++){ 	
			printf("%d ", num2);					
		}		
	}

	printf("\n\n"); //pular 2 linha

	return 0;
}
